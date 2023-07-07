#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 if these no error
 * and 1 if these one
 */

int main(int argc, char **argv)
{

	int i, j;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return(1);
			}
		}

	} else
	{
		printf("0");
	}

	for (j = 1; j < argc; j++)
	{
		printf("1");
	}
	printf("\n");
	return (0);
}
