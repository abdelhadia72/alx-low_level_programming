#include "lists.h"

/**
 * sum_listint - Sums all the data (n) of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * Return: Sum of all the data in the linked list.
 */

int sum_listint(listint_t *head)
{
	int result = 0;

	if (!head)
		return (0);

	while (head)
	{
		result += head->n;
		head = head->next;
	}

	return (result);
}
