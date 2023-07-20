#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a character.
 * @value: The argument to print.
 */

void print_char(va_list value)
{
	printf("%c", va_arg(value, int));
}

/**
 * print_str - Prints a string.
 * @value: The argument to print.
 */

void print_str(va_list value)
{
	char *str;

	str = va_arg(value, char*);

	str ? printf("%s", str) : printf("(nil)");

}

/**
 * print_int - Prints an integer.
 * @value: The argument to print.
 */

void print_int(va_list value)
{
	printf("%d", va_arg(value, int));
}

/**
 * print_float - Prints a float.
 * @value: The argument to print.
 */

void print_float(va_list value)
{
	printf("%f", va_arg(value, double));
}

/**
 * print_all - Prints any type based on the format string.
 * @format: Format string representing the types of arguments to print.
 * Description: The function supports 'c' for characters, 'i' for integers,
 * 'f' for floats, and 's' for strings. It prints the arguments
 * separated by a comma and followed by a new line.
 */

void print_all(const char * const format, ...)
{
	int i, j;

	i = 0;

	va_list list;
	char *separator = "";

	print_me print_value[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(list, format);
	while (format && format[i])
	{
		int j = 0;

		while (print_value[j].flag)
		{
			if (*print_value[j].flag == format[i])
			{
				printf("%s", separator);
				print_value[j].f(list);
				separator = ", ";
				break;
			}
		j++;
		}
	i++;
	}
	va_end(list);
	putchar('\n');
}
