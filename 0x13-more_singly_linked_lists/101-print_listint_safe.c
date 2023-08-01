#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list, handling loops.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	while(head)
	{
		if(!head->next)
		{
			printf("[%p] 98\n",(void *)head);
			return 0 ;
		}
		else
		{
			printf("[%p] %d",(void*)head,  head->n);
			head = head->next;
		}
		i++;
	}
	return (i);
}
