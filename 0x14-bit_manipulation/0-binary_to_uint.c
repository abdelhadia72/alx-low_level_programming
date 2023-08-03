#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: The binary string to convert.
 *
 * Return: The unsigned int equivalent of the binary number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i = 0;

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
		{
			value = 0;
			break;
		}
		value = (value << 1) + (b[i] - 48);
		i++;
	}
	return (value);
}
