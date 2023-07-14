#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * multiply - Multiply two positive numbers
 * @num1: First number as a string
 * @num2: Second number as a string
 * Description: Performs multiplication of
 * two positive numbers and prints the result.
 */

void multiply(char *num1, char *num2)
{

	int i, j, k;
	int len1 = strlen(num1);
	int len2 = strlen(num2);

	int *result = calloc(len1 + len2, sizeof(int));

	if (result == NULL)
	{
		printf("Error: Memory allocation failed.\n");
		exit(98);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			int digit1 = num1[i] - '0';
			int digit2 = num2[j] - '0';
			int mul = digit1 * digit2;
			int sum = result[i + j + 1] + mul;

			result[i + j] += sum / 10;
			result[i + j + 1] = sum % 10;
		}
	}

	k = 0;

	while (result[k] == 0 && k < len1 + len2 - 1)
	{
		k++;
	}

	while (k < len1 + len2)
	{
		putchar(result[k] + '0');
		k++;
	}
	putchar('\n');

	free(result);
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: 0 on success, 98 on error
 */

int main(int argc, char *argv[])
{

	char *num1, *num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit (98);
	}

	num1 = argv[1];
	num2 = argv[2];


	multiply(num1, num2);

	return (0);
}
