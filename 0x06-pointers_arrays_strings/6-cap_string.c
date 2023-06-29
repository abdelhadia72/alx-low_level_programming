#include "main.h"

/**
 * cap_string- funtion capitalizes
 * Description: This funtion
 * capitalizes all words of a string
 * @value: the string that's gonna capitalized.
 * Return: the string after capitalized
 */

char *cap_string(char *value)
{
	char spe[13] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"',  '(',  ')', '{', '}'};
	int i = 0;
	int j = 0;

	while (value[i] != '\0')
	{
		while (spe[j] != '\0')
		{
			if (spe[j] == value[i])
			{
				if (value[i + 1] >= 97 && value[i + 1] <= 122)
				{
					value[i + 1] = value[i + 1] - 32;
				}
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (value);
}
