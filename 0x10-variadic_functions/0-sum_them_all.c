#include <stdarg.h>

/**
 * sum_them_all - Sums a variable number of integers.
 * @n: The number of integers to sum.
 *
 * Return: The sum of the integers.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum;
	unsigned int i;
	va_list list;

	sum = 0;
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, unsigned int);
	}

	va_end(list);
	return (sum);
}
