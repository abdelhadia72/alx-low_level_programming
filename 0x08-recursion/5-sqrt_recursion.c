#include "main.h"

/**
 * _sqrt_recursion - Function that calculates the square root
 * @n: The number to find the square root of
 * Return: The square root of @n, or -1 if @n is negative
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqr_root(n, 1));
}

/**
 * sqr_root - Function that checks the square root
 * @n: The number to find the square root of
 * @q: The number to find the square root starting from 1
 * Description: This function recursively calculates the
 * square root of a number
 * Return: The square root of @n to _sqrt_recursion function,
 *or -1 if @n is negative
 */
int sqr_root(int n, int q)
{
	int sqr = q * q;

	if (sqr < 0)
	{
		return (-1);
	}
	else if (sqr == n)
	{
		return (q);
	}
	return (sqr_root(n, q + 1));
}
