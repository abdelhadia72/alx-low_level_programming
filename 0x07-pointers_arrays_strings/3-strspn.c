#include "main.h"

/**
 * _strspn - calculates the length of initial
 * segment with matching characters
 * @s: Pointer to the string to be checked
 * @accept: Pointer to the string with matching characters
 *
 * Description: Calculates the length of the
 * initial segment of string s that consists
 * of only characters from the accept string.
 *
 * Return: Length of the initial segment with matching characters
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
