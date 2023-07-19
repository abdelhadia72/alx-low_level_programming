#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Number of command line arguments.
 * @argv: Array of strings representing the command line arguments.
 *
 * Return: 0 if successful, 98 for wrong number of arguments,
 * 100 for division/modulo by zero.
 */

int main(int argc, char *argv[])
{
	int (*opration_function)(int, int);

	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	opration_function = get_op_func(argv[2]);
	result = opration_function(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
