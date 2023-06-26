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

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	i++;
	}
	putchar('\n');
}
