#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints a variable number of strings separated by a string.
 * @separator: The string to be printed between strings.
 * @n: The number of strings to print.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *value;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(list, char *);
		if (value)
		{
			printf("%s", value);
		} else
		{
			printf("(nil)");
		}

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}

	}

	va_end(list);
	putchar('\n');
}
