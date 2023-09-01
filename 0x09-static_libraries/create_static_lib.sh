#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create a static library named liball.a from the object files
ar -rc liball.a *.o

# Index the library for faster linking
ranlib liball.a

# Clean up the temporary object files
rm *.o

echo "Static library liball.a has been created."
