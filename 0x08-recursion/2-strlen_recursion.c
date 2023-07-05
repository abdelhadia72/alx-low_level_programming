#include "main.h"

/**
 * _strlen_recursion - function that returns the size of a string
 * Description: This function calculates the length of a string using recursion
 * @s: The string to be measured
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	int n;

	n = 0;

	if (*s != '\0')
	{
		return (n += _strlen_recursion(s + 1) + 1);
	}

	return (n);
}

