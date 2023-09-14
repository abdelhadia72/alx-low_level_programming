#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the node at a specified
 * index in a doubly linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to retrieve
 *
 * Return: Pointer to the node at the specified index or NULL if not found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
	}

	return (NULL);
