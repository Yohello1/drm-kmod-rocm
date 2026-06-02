#!/bin/sh

# Set the path to where your patches are stored
PATCH_DIR="$HOME/dev/drm-patches/big"
APPLIED_DIR="$HOME/dev/drm-patches/applied"

# Temporary file to store patch output errors dynamically
TMP_LOG=$(mktemp /tmp/patch_err.XXXXXX)
trap 'rm -f "$TMP_LOG"' EXIT

# Verify the patch directory exists
if [ ! -d "$PATCH_DIR" ]; then
    echo "❌ ERROR: Patch directory $PATCH_DIR does not exist!"
    exit 1
fi

# Ensure the applied tracking directory exists
mkdir -p "$APPLIED_DIR"

# Run the loop using the absolute path to the patches
for patch_path in $(ls "$PATCH_DIR"/*.patch | sort -V 2>/dev/null); do
    # Safety check in case the directory becomes empty mid-run
    [ -f "$patch_path" ] || continue

    # Extract just the filename for cleaner logging
    patch_name=$(basename "$patch_path")

    echo "=================================================="
    echo "⏩ PATH EXPEDITE: $patch_name"
    echo "=================================================="
    
    # Method 1: Try strict Git Application first
    git am "$patch_path" > /dev/null 2>&1
    
    if [ $? -eq 0 ]; then
        echo "✅ SUCCESS: Applied cleanly via 'git am'"
        # Move it out of the active folder so it's never processed again
        mv "$patch_path" "$APPLIED_DIR/"
    else
        echo "⚠  Strict Git application failed. Aborting Git transaction..."
        git am --abort > /dev/null 2>&1
        
        echo "🔄 FALLBACK: Attempting lenient application via 'patch -p1'..."
        # Method 2: Fall back to standard patch tool (Capture output to TMP_LOG)
        patch -p1 --forward --batch < "$patch_path" > "$TMP_LOG" 2>&1
        PATCH_STATUS=$?
        
        if [ $PATCH_STATUS -eq 0 ]; then
            echo "✅ SUCCESS: Patch merged via lenient fallback. Staging commit..."
            git add .
            git commit -m "Merged via lenient fallback: $patch_name" > /dev/null
            # Move it out of the active folder so it's never processed again
            mv "$patch_path" "$APPLIED_DIR/"
        else
            echo "⚠  Standard fallback paths failed. Attempting deep file lookup..."
            
            # Method 3: Deep file name lookup (essential for drm-kmod layout drifts)
            target_file=$(grep -m 1 '^+++ b/' "$patch_path" | sed 's/+++ b\///')
            bare_filename=$(basename "$target_file")
            
            # Locate where that file actually lives inside the FreeBSD drm-kmod repo
            local_path=$(find . -name "$bare_filename" -not -path "*/.git/*" | head -n 1)
            
            if [ -n "$local_path" ]; then
                echo "📍 Found file locally at: $local_path"
                # Capture output to TMP_LOG again for the deep lookup
                patch -p0 --forward --batch "$local_path" < "$patch_path" > "$TMP_LOG" 2>&1
                LOCAL_PATCH_STATUS=$?
            else
                echo "❌ Could not locate '$bare_filename' anywhere in the tree." > "$TMP_LOG"
                LOCAL_PATCH_STATUS=1
            fi
            
            if [ $LOCAL_PATCH_STATUS -eq 0 ]; then
                echo "✅ SUCCESS: Patch merged via deep lookup fallback. Staging commit..."
                git add .
                git commit -m "Merged via deep lookup fallback: $patch_name" > /dev/null
                # Move it out of the active folder so it's never processed again
                mv "$patch_path" "$APPLIED_DIR/"
            else
                echo ""
                echo "❌ CRITICAL ERROR: All application vectors failed on $patch_name"
                echo "--------------------------------------------------"
                echo "📋 GNU PATCH FAILURE DETAILS:"
                # Output the exact hunks/files that failed from the log
                cat "$TMP_LOG"
                echo "--------------------------------------------------"
                echo "💡 Tip: If this file is display/lockdep/debug related, manually 'mv' it to 'not_needed' and rerun."
                echo "🛑 SYSTEM HALTED. Clean up the working directory, resolve conflicts, or skip."
                break
            fi
        fi
    fi
done
