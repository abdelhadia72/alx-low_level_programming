#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point of the program
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 if there's no error
 * and 1 if there's an error
 */

int main(int argc, char **argv)
{
	int i, res = 0;

	for (i = 1; i < argc; i++)
	{
		if (strspn(argv[i], "0123456789") != strlen(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

	res += atoi(argv[i]);
	}

	printf("%d\n", res);
	return (0);
}
