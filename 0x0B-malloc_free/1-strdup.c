#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * containing a copy of the string.
 * @str: The string to be duplicated.
 * Return: A pointer or Null on failure.
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	dup = (char *) malloc((strlen(str) + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= strlen(str); i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
