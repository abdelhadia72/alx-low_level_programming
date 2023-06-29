#include "main.h"

/**
 * _strcmp - funtion check string
 * Description: This funtion
 * checks funtions if they are the same
 * or not act like strcmp
 * @s1: first string to compare with
 * @s2: secned string to compare with
 * Return: (0) if they the same (-15)
 * if the s1 > s2 and (15) if the s1 < s2
 */

int _strcmp(char *s1, char *s2)
{
	int string1;
	int string2;
	int value;

	string1 = string2 = value;
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*(s1++) == *(s2++))
		{
			if (*s1 != '\0')
				string1++;
			if (*s2 != '\0')
				string2++;
			value = 0;
		}
		else if (*(s1++) != *(s2++))
		{
			if (*s1 != '\0')
				string1++;
			if (*s2 != '\0')
				string2++;
		}
	}

	if (string1 < string2)
		value = 15;
	else if (string1 > string2)
		value = -15;

	return (value);
}
