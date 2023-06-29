#include "main.h"

/**
 * reverse_array- funtion reverse an array
 * Description: This funtion
 * everses the content of an array of integers
 * @a: the array that giving by the user
 * @n: the number (size) of the array
 * Return: (void)
 */


void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;
	int temp;

	start = a;
	end = a + n - 1;

	while (end > start)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
