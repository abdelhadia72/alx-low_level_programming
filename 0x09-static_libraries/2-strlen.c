#include "main.h"

/**
 * _strlen - funtion return size
 * Description: This funtion that
 * return to you the size of you string
 * @s: The arrg that giving by the user
 * Return: size of the string
 *
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}

	return (counter);
}
