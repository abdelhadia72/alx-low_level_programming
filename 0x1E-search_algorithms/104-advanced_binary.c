#include "search_algos.h"

int advanced_binary_r(int *array, int start, int end, int value);
void print_array(int *array, size_t start, size_t end);

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the index where the value is located, or -1 if value is not present
 * in array
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (advanced_binary_r(array, 0, size - 1, value));
}

/**
 * advanced_binary_r - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @start: starting index for binary search
 * @end: ending index for binary search
 * @value: value to search for
 *
 * Return: the index where the value is located, or -1 if value is not present
 * in array
 */

int advanced_binary_r(int *array, int start, int end, int value)
{
	int mid;

	if (start > end)
		return (-1);

	mid = start + (end - start) / 2;
	print_array(array, start, end);

	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
		else
			return (advanced_binary_r(array, start, mid, value));
	}
	else if (array[mid] < value)
		return (advanced_binary_r(array, mid + 1, end, value));
	else
		return (advanced_binary_r(array, start, mid - 1, value));
}


/**
 * print_array - prints the elements of an array between two indices
 * @array: pointer to the first element of the array
 * @start: starting index
 * @end: ending index
 */
void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");
	for (; start < end; start++)
		printf("%d, ", array[start]);

	printf("%d\n", array[start]);
}
