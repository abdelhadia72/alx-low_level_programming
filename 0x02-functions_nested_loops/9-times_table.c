#include "main.h"

/**
 * times_table - time table for 9
 * Description: This function prints
 * the times table fot 9
 */


void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			n = j * i;
			_putchar(',');
				if (n < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(n + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
				}
		}
	_putchar('\n');
	}
}
