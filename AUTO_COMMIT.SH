#!/bin/bash

# Loop through all files in the current folder
for file in *; do
    # Check if the item is a file
    if [[ -f "$file" ]]; then
        # Add the file to git
        git add "$file"
        
        # Commit with a message containing the name of the file
        git commit -m "Add ${file}"
    fi
done
