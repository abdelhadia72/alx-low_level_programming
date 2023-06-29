#include "main.h"

/*
 * string_toupper - funtion string_toupper
 * Description: This funtion
 * uppoercase all words of a string
 * @value: the string that's gonna uppoercased.
 * Return: the string after uppoercased
 */
char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
			*str -= 32;

		str++;
	}
	return (str);
}
