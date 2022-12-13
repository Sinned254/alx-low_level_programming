#!/bin/bash
gcc -Wall -fPIC -c *.c
gcc -shared -W1,-soname,liball.so -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
