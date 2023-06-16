#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Check if a number is positive, negative, or zero
 * Return: 0 (No Error)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}

