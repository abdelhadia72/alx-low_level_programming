#include "search_algos.h"
#include <math.h>

int min(int a, int b)
{
	return a < b ? a : b;
}
/**
 * jump_search - Searches for a value in a sorted
 * array using jump search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index where value is found, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int prev = 0;
	size_t step = sqrt(size);

	if (!array)
		return (-1);

	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= (int)size)
			return (-1);
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, min(step, size));

	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		prev++;
		if (prev == min(step, size))
			return (-1);
	}

	if (array[prev] == value)
		return (prev);

	return (-1);
}
