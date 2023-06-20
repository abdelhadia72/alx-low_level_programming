#include <stdio.h>

/**
 * times_table - time table for 9
 * Description: This function prints
 * the times table fot 9
 */


void print_times_table(int n)
{
	int i, j, k;

	for (i = 0; i <= n; i++)
	{
		putchar('0');
		for (j = 1; j <= n; j++)
		{
			k = j * i;
			putchar(',');
				if (k < 10)
				{
					putchar(' ');
					putchar(' ');
					putchar(k + '0');
				}
				else
				{
					putchar(' ');
					putchar((k / 10) + '0');
					putchar((k % 10) + '0');
				}
		}
	putchar('\n');
	}
}
