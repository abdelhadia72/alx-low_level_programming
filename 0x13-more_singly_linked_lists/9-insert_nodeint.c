#include "lists.h"
#include <stdlib.h>

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned zero = 0;

	if(!head || !(*head) || idx <  zero)
		return (NULL);
	
	new_node->n = n;
	
	current = *head;
	while(idx > 1)
	{
		current = current->next;
		idx--;
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}