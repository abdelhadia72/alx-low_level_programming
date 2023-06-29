#include "main.h"

/**
 * cap_string - function that capitalizes
 * Description: This function capitalizes the first letter of each word
 * in the string
 * @value: the string to be capitalized
 * Return: the capitalized string
 */

char *cap_string(char *value)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i, j;

	for (i = 0; value[i] != '\0'; i++)
	{
		if (i == 0 || value[i - 1] == ' ')
		{
			for (j = 0; separators[j] != '\0'; j++)
			{
				if (value[i] == separators[j])
				{
					if (value[i + 1] >= 'a' && value[i + 1] <= 'z')
						value[i + 1] -= 32;
					break;
				}
			}
		}
	}
	return (value);
}
