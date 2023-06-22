#include "main.h"

/**
 * more_numbers - function print numbers
 * Description: This function print from 0
 * to 14 using only _putchar
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
				_putchar((j % 10) + '0');
		}
	_putchar('\n');
	}
}
