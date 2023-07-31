#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to retrieve.
 *
 * Return: Pointer to the nth node, or NULL if the node doesn't exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head && index > 0)
	{
		return (NULL);
	}
	else
	{
		while (index > i)
		{
			if (!head)
				return (NULL);
			head = head->next;
			i++;
		}
	}
	return (head);
}
