#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that convert
 * Description: This funtion that
 * function that convert a string to an integer
 * @s: The arrg that giving by the user
 * Return: String.
 *
 */


int _atoi(char *s)
{
	int i;
	int res = 0;
	int sig = -1;
	int brk = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sig = sig * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10;
			res -= (s[i] - '0');
			brk = 1;
			}
		else if (brk == 1)
		break;
	}
	res = sig * res;
	return res;
}
