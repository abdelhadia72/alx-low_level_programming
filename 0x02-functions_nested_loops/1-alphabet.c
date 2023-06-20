#include "main.h"

/**
 * print_alphabet - print all alphabet
 * Description: print all alphabet from a to z
 * by using the _putchar
 * Return: Always 0 if there is no error
 */
void print_alphabet(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
