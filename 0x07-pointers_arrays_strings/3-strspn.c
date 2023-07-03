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
	int i, j;
	unsigned int match = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match++;
				break;
			}
		}
		if (accept[i] == '\0')
		{
			return (match);
		}
	}
	return (match);
}
