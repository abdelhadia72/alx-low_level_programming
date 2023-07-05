#include "main.h"

/**
 * _pow_recursion - power with recursive
 * Description: This function calculates the power of a number.
 * @x: The base number.
 * @y: The power times of multiple.
 * Return: The power of @x and @y.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x *= _pow_recursion(x, y - 1));
	}
}

