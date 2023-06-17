#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (No Error)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			if (j != 0)
				putchar(' ');

			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i != 98 || j != 99)
				putchar(',');
		}
	}

	putchar('\n');

	return (0);
}

