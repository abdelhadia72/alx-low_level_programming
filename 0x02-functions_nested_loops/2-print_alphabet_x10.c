#include "main.h"

/**
 * print_alphabet_x10 - function prints alphabet
 * Description: this function prints alphabet
 * fron a to z 10 times
 * Return: 0 (No Error)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int c = 'a';

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		i++;
	}
}
