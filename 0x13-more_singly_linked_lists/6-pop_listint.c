#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Removes the first element of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * Return: The value stored in the first element of the list.
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *tmp;

	tmp = (*head);
	value = (*head)->n;
	(*head) = (*head)->next;
	free(tmp);
	return (value);
}
