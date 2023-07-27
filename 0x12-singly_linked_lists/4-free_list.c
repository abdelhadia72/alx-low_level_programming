#include "lists.h"

/**
 * free_list - Frees a linked list including its strings.
 * @head: Pointer to the head of the list.
 */

void free_list(list_t *head)
{
	list_t *holder;

	while (head)
	{
		holder = head;
		head = holder->next;
		free(holder->str);
		free(holder);
	}
	holder = NULL;
}
