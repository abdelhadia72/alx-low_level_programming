#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings up to n bytes
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes from s2 to concatenate
 * Return: Pointer to the concatenated string, or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *str;
	unsigned int len = n + strlen(s1);

	if (!s1)
		s1 = "";
	else if (!s2)
		s2 = "";

	str = (char *)malloc(len);
	if (!str)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		if (i < strlen(s1))
		{
			str[i] = s1[i];
		} else
		{
			str[i] = *(s2++);
		}
	}

	str[len] = '\0';

	return (str);
}
