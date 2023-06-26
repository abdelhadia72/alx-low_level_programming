#include "main.h"
#include <stdio.h>

/**
 * print_array - funtion prints array
 * Description: This funtion
 * prints all element that do you have in
 * your array
 * @a: the array giving by the user
 * @n: the size of the array
 * Return: void
 *
 */


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a++));

		if(i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
