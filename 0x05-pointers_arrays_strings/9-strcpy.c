#include "main.h"
#include <stdio.h>

/**
 * _strcpy - funtion copy string
 * Description: This funtion
 * it's copy a string from the @src
 * @src: the string giving by the user
 * @dest: the arrg that we copy to .
 * Return: dest
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);

	return (dest);
}
