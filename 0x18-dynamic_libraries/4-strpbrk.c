#include "main.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * Description: Searches the string for the
 * first occurrence of any byte from the set.
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the set of bytes to be matched
 * Return: Pointer to the first matching
 * byte, or NULL if no match is found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a;

		a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (0);
}
