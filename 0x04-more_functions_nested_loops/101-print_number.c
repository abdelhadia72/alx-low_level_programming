#include "main.h"

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * print_number - print number
 * @n: the arrg that gived by
 * the user to print it .
 * Return: void
 */

void print_number(int n)
{

	unsigned int n1 = 0;

	if  (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}

	else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}
