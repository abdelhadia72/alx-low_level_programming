#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a
 * given position in a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if successful, -1 if the operation fails.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *tmp;
	unsigned int i = 0;

	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	current = *head;

	while (current && i < index - 1)
	{
		current = current->next;
		i++;
	}

	if (!current || !current->next)
		return (-1);

	tmp = current->next;
	current->next = current->next->next;
	free(tmp);
	return (1);
}
