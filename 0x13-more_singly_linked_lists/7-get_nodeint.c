#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if(!head && index > 0)
	{
		return (NULL);
	} else
	{
		while(index > i)
		{
			if(!head)
				return (NULL);
			head = head->next;
			i++;
		}
	}
	return (head);
}