#!/usr/bin/bash
gcc -Wall -Werror -Wextra -pedantic *.c -c -fpic
gcc -Wall -Werror -Wextra -pedantic *.o -shared -o liball.so
rm *.o
