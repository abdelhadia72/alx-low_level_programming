#include <stdio.h>
#include <stdlib.h>

/**
 * main - entery funtion
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 if these not error
 * and 1 is thesen't any one
 */

int main(int argc, char *argv[])
{
	int num, i, result;
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);

	result = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < num_coins && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			result++;
			num -= coins[i];
		}
	}
	printf("%d\n", result);
	return (0);
}
