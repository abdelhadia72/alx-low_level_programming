#include "lists.h"

int sum_listint(listint_t *head)
{
	int result = 0;

	if(!head)
		return (0);
	
	while (head)
	{
		result += head->n;
		head = head->next;
	}

	return (result);
}