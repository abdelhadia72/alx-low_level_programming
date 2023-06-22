#include "main.h"
/**
 * print_most_numbers - function print numbers
 * Description: This function prints
 * all numbers exept 2 and 4
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);

		}
	}
	_putchar('\n');
}
