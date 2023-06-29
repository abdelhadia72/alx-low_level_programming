#include <stdio.h>

/**
 * _strcat - funtion concatenates
 * Description: This funtion
 * concatenates two strings
 * @dest: the string that we will add to
 * @src:  the string that we will add.
 * Return: dest new string
 */


char *_strcat(char *dest, char *src)
{
	int size;

	size = 0;

	while (dest[size] != '\0')
	{
		size++;
	}

	while (*src != '\0')
	{
		*(dest + size++) = *(src++);
	}
	*(dest + size++) = '\0';
	return (dest);
}
