#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the index where the value is located, or -1 if value is not present
 * in array or if array is NULL
 */


int binary_search(int *array, size_t size, int value)
{
	size_t i;
	int l = 0;
	int h = size - 1;
	int mid;
	int j;

	if (!array)
		return (-1);

	for (i = 0; l <= h; i++)
	{
		mid = (l + h) / 2;


		printf("Searching in array: ");
		for (j = l; j <= h; j++)
		{
			printf("%d", array[j]);
			if (j != h)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (array[mid]);
		else if (array[mid] > value)
			h = mid - 1;
		else
			l = mid + 1;
	}

	return (-1);
}
