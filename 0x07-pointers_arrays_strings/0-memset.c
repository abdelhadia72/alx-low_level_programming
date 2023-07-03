#include "main.h"

/**
 * _memset - fills memory with a value
 * @s: Pointer to memory
 * @b: Value to be set
 * @n: Number of bytes
 * Description: Fills the memory pointed to by s with the value b for n bytes.
 * Return: Pointer to the filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s++) = b;
	}

	return (s);
}
