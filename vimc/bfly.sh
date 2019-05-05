#!/bin/bash

clear
# Clear the previous result files
rm -rf *.o *.exe *.dat *.png

# Compile the c file using gcc compiler
gcc -c -Wall butterfly.c

# Compile the object file into an executable
gcc -o butterfly.exe butterfly.o -Wall

# Run the executable to produce the dat file
./butterfly.exe > output.dat

# Run the python script to plot the butterfly
python plot_butterfly.py
