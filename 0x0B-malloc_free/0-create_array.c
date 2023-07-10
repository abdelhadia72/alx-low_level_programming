#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Allocates memory and initializes it
 * with a specific character
 * @size: The size of the array to create
 * @c: The character to initialize the array with
 * Return: A pointer to the allocated memory, or NULL on failure
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *bee;

	bee = (void *) malloc(size);

	if (bee == NULL || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		bee[i] = c;
	}

	return (bee);
}
