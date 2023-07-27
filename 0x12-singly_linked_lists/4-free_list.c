#include "lists.h"

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
