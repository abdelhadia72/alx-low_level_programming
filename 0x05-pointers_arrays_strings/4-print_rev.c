#include <stdio.h>

/**
 * print_rev - funtion reverse text
 * Description: This funtion that
 * reverse a text
 * @s: The arrg that giving by the user
 * Return: void
 *
 */


void print_rev(char *s)
{
	int i;
	int size = 0;
	char *s1 = s;

	while (*s1 != '\0')
	{
		size++;
		s1++;
	}
	s--;
	for(i = 1; i <= size - 1; i++)
	{
		putchar(*s1);
		s1--;
	}
	putchar('\n');
}
