#include "main.h"
#include <stdio.h>

/**
 * _puts - funtion prints string
 * Description: This funtion that
 * print a string for you
 * @str: the arrg that's giving by
 * the user
 * Return: void
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
