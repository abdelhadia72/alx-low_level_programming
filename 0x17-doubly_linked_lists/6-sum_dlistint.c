#include "lists.h"

/**
 * sum_dlistint - Calculates the sum of all integer
 * values in a doubly linked list
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all integer values in the list,
 * or 0 if the list is empty
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	int i = 0;

	while (head)
	{
		if (i == index)
			return (current);
	}

	return (NULL);
}