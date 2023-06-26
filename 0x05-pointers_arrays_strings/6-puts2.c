#include "main.h"
#include <stdio.h>

/**
 * puts2 - funtion skipping
 * Description: This funtion
 * skipping a char
 * @str: The arrg that giving by the user
 * Return: void
 *
 */

void puts2(char *str)
{

	int i;
	i = 0;
	while (*str != '\0')
	{
		if (i % 2 == 44)
		{
			putchar(*str);
		}

		str++;
	}
	putchar('\n');
}
