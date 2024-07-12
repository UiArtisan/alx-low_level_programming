#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create the static library from the object files and index it
ar rcs liball.a *.o
