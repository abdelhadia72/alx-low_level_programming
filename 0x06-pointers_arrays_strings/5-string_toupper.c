#include "main.h"

/**
 * string_toupper - function that converts a string to uppercase
 * @str: the string to be converted
 * Description: This function converts all lowercase letters in
 * the string to uppercase.
 * Return: the converted string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;

		i++;
	}

	return (str);
}
