#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: Pointer to the head of the list.
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (!h)
		return (0);

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
