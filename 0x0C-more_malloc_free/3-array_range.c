#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Creates an array of integers in a specified range
 * @min: The minimum value of the range
 * @max: The maximum value of the range
 * Return: Pointer to the array of integers, or NULL on failure
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = (int *)malloc((max - min + 1) * sizeof(int));

	if (!ptr)
		return (NULL);

	for (i = 0 ; min <= max; i++, min++)
	{
		ptr[i] = min;
	}

	return (ptr);
}
