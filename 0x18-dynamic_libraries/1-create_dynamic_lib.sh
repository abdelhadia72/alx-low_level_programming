#!/usr/bin/bash
gcc -fpic *.c -c
gcc -shared -o liball.so *.o
