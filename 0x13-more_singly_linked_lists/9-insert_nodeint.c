#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at
 * a given position in a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index at which the new node should be inserted.
 * @n: The data value to be stored in the new node.
 * Return: Address of the new node, or NULL if the operation fails.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current && idx > 1)
	{
		current = current->next;
		idx--;
	}

	if (!current)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}


