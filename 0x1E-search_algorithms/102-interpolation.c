#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the index where the value is located, or -1 if value is not present
 * in array or if array is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos = 0;
	int i;


	if (!array)
		return (-1);

	for (i = 0; low <= high && value >= array[low] && value <= array[high]; i++)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
		* (value - array[low]));

		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
		{
			high = pos - 1;
		}
		else if (array[pos] < value)
		{
			low = pos + 1;
		}
	}

	printf("(Value checked array[%d] is out of range)\n", array[i]);
	return (-1);
}
