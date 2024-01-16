#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

void print_array(int *array, size_t start, size_t end);
int binary_search_t(int *array, size_t start, size_t end, int value);
/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the first index where the value is located, or -1 if value is not
 * present in array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, min;
	int res;

	if (!array)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	min = (bound < size - 1) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, min);
	res = binary_search_t(array, bound / 2, min, value);

	return (res);
}

/**
 * binary_search_t - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @start: starting index for binary search
 * @end: ending index for binary search
 * @value: value to search for
 *
 * Return: the index where the value is located, or -1 if value is not present
 * in array
 */
int binary_search_t(int *array, size_t start, size_t end, int value)
{
	size_t mid;

	while (start <= end)
	{
		mid = (start + end) / 2;
		print_array(array, start, end);

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}

	return (-1);
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
