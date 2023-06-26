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

	while (*str > '\0')
	{
		putchar(*str);
		*(str+=2);
	}
	putchar('\n');
}
