#include "main.h"

/**
 * factorial - factorial function
 * Description: This function calculates the factorial of a number.
 * @n: The number to calculate the factorial of.
 * Return: Factorialized number.
 */


int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	} else if (n < 0)
	{
		return (-1);
	}

	return (n *= factorial(n - 1));
}
