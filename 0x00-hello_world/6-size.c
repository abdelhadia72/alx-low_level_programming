#include <stdio.h>

int main(void)
{
    int number = 4;
    long size = 34;
    char lan = 'C';
    float mark = 3.3;
    long long big = 123;

    printf("Size of a char: %li byte(s)\n", sizeof(lan));
    printf("Size of a int: %li byte(s)\n", sizeof(number));
    printf("Size of a long: %li byte(s)\n", sizeof(size));
    printf("Size of a long long: %li byte(s)\n", sizeof(big));
    printf("Size of a float: %li byte(s)\n", sizeof(mark));
    return 0;

}

