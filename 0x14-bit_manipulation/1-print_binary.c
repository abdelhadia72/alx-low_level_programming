#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted and printed in binary.
 */

void print_binary(unsigned long int n)
{
	if (n > 0)
	{
		print_binary(n >> 1);
	}

	(n & 1) ? _putchar('1') : _putchar('0');
}
