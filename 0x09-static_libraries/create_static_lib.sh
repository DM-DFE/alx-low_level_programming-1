#!/usr/bin/env bash

# loop through all the files in the current directory
# and add them to the list of files to compile
#for file in ./*.c
#do
#  echo "Compiling $file"
#  gcc -c "$file"
#done

gcc -c ./*.c

# compile the files into a static library
ar rcs liball.a ./*.o

echo "Static library created"

# clean up the object files
rm ./*.o

# note: the ./*.o instead of *.o so names with dashes won't become options.

