#include "main.h"
/**
 * print_diagonal - function print diagonal
 * Description: This function prints
 * diagnaol
 * @n: the argument that holde the tall of
 * the diagnaol
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
	{
		_putchar (32);
	}
	_putchar (92);
	_putchar ('\n');
	}
	if (n <= 0)
	{
	_putchar('\n');
	}
}
