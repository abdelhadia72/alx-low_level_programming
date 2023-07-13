#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates and initializes memory for an array
 * @nmemb: Number of elements to allocate
 * @size: Size of each element
 *
 * Return: Pointer to the allocated memory block, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *calloc;

	if (!nmemb || !size)
		return (NULL);
	calloc = (void *)malloc(size * nmemb);

	if (!calloc)
		return (NULL);

	memset(calloc, 0, (size * nmemb));

	return (calloc);
}
