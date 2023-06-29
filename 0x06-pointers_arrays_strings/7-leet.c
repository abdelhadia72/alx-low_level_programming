#include "main.h"

/**
 * leet - function that encodes
 * Description: This function replaces certain characters
 * in the string with their corresponding 1337 encoding.
 * @s: the string to be encoded
 * Return: the encoded string
 */
char *leet(char *s)
{
	int i, j;
	char s1[] = "aeotl";
	char s2[] = "AEOTL";
	char s3[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == s1[j] || s[i] == s2[j])
			{
				s[i] = s3[j];
				break;
			}
		}
	}

	return (s);
}
