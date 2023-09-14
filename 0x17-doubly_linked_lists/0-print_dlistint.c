#include "lists.h"

/**
 * print_dlistint - print from duble linked list
 *
 * @h: the head of the linked list
 * Return: the number of the node printed
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t size = 0;

	while (current)
	{
		size++;
		printf("%d", current->n);
		current = current->next;
	}
	return (size);
}
