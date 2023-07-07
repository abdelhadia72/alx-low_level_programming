#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: Pointer to the string
 * @c: Character to be located
 *
 * Description: Searches for the first occurrence
 * of the character c in the string s.
 *
 * Return: Pointer to the first occurrence
 * of the character in the string,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}

