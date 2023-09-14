#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new
 * node at a given index of a doubly linked list
 * @h: Pointer to a pointer to the head of the list
 * @idx: Index at which the new node should be inserted
 * @n: Integer value to be stored in the new node
 *
 * Return: Address of the new node or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;

	if (!h)
		return (NULL);


	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *h;


	while (current)
	{
		if (i == idx - 1)
		{
			newNode->prev = current;
			newNode->next = current->next;
			current->next->prev = newNode;
			current->next = newNode;
		}
		current = current->next;
		i++;
	}

	return (newNode);
}
