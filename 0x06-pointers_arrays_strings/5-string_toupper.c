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
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
	}
	return (str);
}
