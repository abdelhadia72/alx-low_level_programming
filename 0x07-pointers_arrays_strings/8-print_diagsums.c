#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: Pointer to the square matrix
 * @size: Size of the matrix
 * Description: Computes the sum of the elements along the two diagonals
 * of the square matrix and prints the sums.
 */
void print_diagsums(int *a, int size)
{
	int n1 = 0;
	int n2 = 0;
  int i;
	for (i = 0; i < size; i++)
	{
		n1 += *(a + (size * i + i));
		n2 += *(a + (size * i + size - 1 - i));
	}

	printf("%d, %d",n1, n2);
}
