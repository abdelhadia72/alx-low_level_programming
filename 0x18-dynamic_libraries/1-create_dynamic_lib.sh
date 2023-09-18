#!/usr/bin/bash
gcc *.c -c -fpic
gcc *.o -shared -o liball.so
rm *.o
