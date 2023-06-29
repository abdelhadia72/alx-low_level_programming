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
	int i;
		for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
