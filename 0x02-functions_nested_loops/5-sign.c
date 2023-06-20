#include "main.h"

/**
 * print_sign - check for sign
 * Description: return a value (1,0,-1)
 * and print (+, -, 0)
 * @n: argument that store the value
 * of the cheking one
 * Return: 0 Always Success
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
