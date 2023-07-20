#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints a variable number of integers separated by a string.
 * @separator: The string to be printed between integers.
 * @n: The number of integers to print.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list list;
	unsigned int i;
	int value;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		value =	va_arg(list, unsigned int);
		printf("%d", value);
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(list);
	printf("\n");
}
