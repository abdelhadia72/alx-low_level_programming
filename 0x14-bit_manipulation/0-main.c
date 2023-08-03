#include "main.h"
#include <stdio.h>

int main()
{
    // Test cases
    unsigned long int test_cases[] = {
        0, 1, 42, 255, 1000, 9876543210
    };
    int num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_test_cases; i++) {
        printf("Binary representation of %lu: ", test_cases[i]);
        print_binary(test_cases[i]);
        putchar('\n');
    }

    return 0;
}

