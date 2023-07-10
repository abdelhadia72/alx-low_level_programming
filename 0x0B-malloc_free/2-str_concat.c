#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: A pointer to the concatenated string, or NULL on failure
 */
 
char *str_concat(char *s1, char *s2)
{
	int length;
	int i;
	char *newstring;

	length = strlen(s1) + strlen(s2) + 1;
	newstring = (char *)malloc(length * sizeof(char));
	if (newstring == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		if (i < strlen(s1))
		{
			newstring[i] = s1[i];
		}
		else
		{
			newstring[i] = s2[i - strlen(s1)];
		}
	}

	if (newstring == NULL)
	{
		return ("");
	}

	return (newstring);
}
