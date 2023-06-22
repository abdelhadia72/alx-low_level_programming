#include "main.h"

/**
 * print_line - function print line
 * Description: This function print
 * a line depend on the number that
 * passed by @n
 * @n: is the argument that holde
 * the number of line
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0 ; i < n; i++)
	{
		_putchar(95);

	}
	_putchar('\n');
}
