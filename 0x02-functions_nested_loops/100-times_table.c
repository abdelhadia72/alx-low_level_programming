#include "main.h"

/**
 * print_times_table - prints table by
 * @n : times table to use
 */

void print_times_table(int n)
{

int i = 0, s, b;

if (n < 0 || n > 15)
	return;

for (i = 0; i <= n; i++)
{
	for (b = 0; b <= n; b++)
	{
		s = i * b;
		if (b == 0)
			_putchar('0' + s);
		else if (s < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + s);
		}
		else if (s < 100)
		{
			_putchar(' ');
			_putchar('0' + s / 10);
			_putchar('0' + s % 10);
		}
		else
		{
			_putchar('0' + s / 100);
			_putchar('0' + (s - 100) / 10);
			_putchar('0' + s % 10);
		}
		if (b < n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
}
