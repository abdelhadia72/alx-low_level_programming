#include "main.h"

/**
 * _abs - Compute the absolute value of a number
 * Description: This function takes an input
 * number and returns its absolute value.
 * @n: The number to compute the absolute value of
 * Return: The absolute value of the input number
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
