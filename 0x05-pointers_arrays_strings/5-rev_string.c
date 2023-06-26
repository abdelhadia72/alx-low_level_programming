#include "main.h"

/**
 * rev_string- funtion reverse string
 * Description: This funtion
 * reverse a string
 * @s: The arrg that giving by the user
 * Return: void
 *
 */


void rev_string(char *s)
{
	int size = 0;
	char *s1 = s;
	char *start = s;
	char *end = s + size - 1;

	while (*s1 != '\0')
	{
		size++;
		s1++;
	}


	while (end > start)
	{
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
