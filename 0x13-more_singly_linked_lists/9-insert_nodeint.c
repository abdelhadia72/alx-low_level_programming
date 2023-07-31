#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node
 * at a given position in a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index at which the new node should be inserted.
 * @n: The data value to be stored in the new node.
 * Return: Address of the new node, or NULL if the operation fails.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int zero = 0;

	if (!head || !(*head) || idx <  zero)
		return (NULL);

	new_node->n = n;

	current = *head;
	while (idx > 1)
	{
		current = current->next;
		idx--;
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
