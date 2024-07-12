#!/bin/bash
# Create object files for each .c file in the current directory
gcc -c *.c

# Create the static library from the object files
ar rcs liball.a *.o

# Clean up by removing the object files
rm *.o
