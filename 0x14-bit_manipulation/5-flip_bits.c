#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: parameter
 * @m: destiny
 * Return: num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;
	unsigned long int calc = n ^ m;

	while (calc > 0)
	{
		num += calc & 1;
		calc >>= 1;
	}

	return (num);
}
