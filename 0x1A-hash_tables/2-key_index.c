#include "hash_tables.h"

/**
 * key_index - Calculates the index for a given key in a hash table.
 * @key: The key to calculate the index for.
 * @size: The size of the array in the hash table.
 *
 * Return: The index where the key-value pair should be stored.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value = 0;

	if (!key || size <= 0)
		return (0);

	value = hash_djb2(key) % size;
	return (value);
}
