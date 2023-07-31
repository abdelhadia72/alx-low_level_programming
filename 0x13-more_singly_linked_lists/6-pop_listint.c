#include "lists.h"
#include <stdlib.h>

int pop_listint(listint_t **head)
{
	int value;
	listint_t *tmp;

	tmp = (*head);
	value = (*head)->n;
	(*head) = (*head)->next;
	free(tmp);
	return(value);
}