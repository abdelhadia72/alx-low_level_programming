#include "lists.h"

/**
 * print_list - Prints the elements of a linked list.
 * @h: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		} else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		n++;
	}
	return (n);
}