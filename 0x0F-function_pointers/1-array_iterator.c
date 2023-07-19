#include <stdio.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size_t; i++)
	{
		(*action)(array[i]);
	}
}
