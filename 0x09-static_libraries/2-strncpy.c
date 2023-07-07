#include "main.h"

/**
 * _strncpy - funtion copied strings
 * Description: This funtion
 * copies a string and act like strncpy
 * @dest: the string that we will copy into
 * @src:  the string that we will copy from.
 * @n: the number of bytes to copy
 * Return: dest copyed string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
