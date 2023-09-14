#include "lists.h"

/**
 * sum_dlistint - Calculates the sum of all integer
 * values in a doubly linked list
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all integer values in the list,
 * or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	int sum = 0;

	if (!head)
		return (0);

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
