# Change to the directory containing your files
cd /binary_trees

# Replace spaces with tabs in all files in the current directory and its subdirectories
find . -type f -name "*.c" -o -name "*.h" -exec sed -i 's/    /\t/g' {} +
