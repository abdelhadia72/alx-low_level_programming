#include "main.h"

/**
 * _memcpy - copies data from source to destination
 * @dest: Pointer to destination memory
 * @src: Pointer to source memory
 * @n: Number of bytes to copy
 * Description: Copies n bytes of data from the
 * source memory area to the destination memory area.
 * Return: Pointer to the destination memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest++) = *(src++);
	}

	return (dest);
}
