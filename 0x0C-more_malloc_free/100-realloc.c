#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block.
 * @ptr: Pointer to the memory block to reallocate.
 * @old_size: Old size of the memory block.
 * @new_size: New size of the memory block.
 * Return: Pointer to the reallocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	void *tmp;

	if (new_size == old_size)
	{
		return (ptr);
	} else if (ptr == NULL)
	{
		tmp = malloc(new_size);
	} else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		tmp = malloc(new_size);
	if (tmp == NULL)
	{
		return (NULL);
	}
	memcpy(tmp, ptr, old_size);
	free(ptr);
}

	return (tmp);
}
