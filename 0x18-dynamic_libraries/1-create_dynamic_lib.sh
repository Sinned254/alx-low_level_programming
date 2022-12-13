#!/bin/bash
gcc -Wall -fPIC -c *.c
gcc -shared -o -Wl,-soname,liball.so liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
