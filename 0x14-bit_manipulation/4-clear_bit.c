#include "main.h"

/**
 * clear_bit - Clear the value of a bit to 0 at a given index
 * @n: Pointer to the number in which the bit is to be Clear
 * @index: The index of the bit to be Clear
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
		unsigned long int mask = 1UL << index;

		if (index >= sizeof(*n) * 8)
			return (-1);

		*n = *n & ~mask;

	return (1);
}

