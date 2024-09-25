#!/bin/bash

# Lặp qua tất cả các folder trong thư mục hiện tại
for dir in */; do
    # Thêm folder vào git
    git add "$dir"
    
    # Commit với thông điệp có tên của folder
    git commit -m "Create ${dir%/}"
done
