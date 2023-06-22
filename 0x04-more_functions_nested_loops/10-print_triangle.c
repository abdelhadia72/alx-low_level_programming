#include "main.h"
/**
 *  print_triangle - function prints triangle
 * Description: This function thaks an argument
 * and drow an triangle based on it
 * @size: the argument for triangle number
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i <= size; i++)
	{
		for (j = 0; j <= size - i; j++)
		{
			_putchar(32);
		}
		for (j = 0; j <= i; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
