#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: Pointer to the head of the list.
 * @str: String to be stored in the new node.
 * Return: Address of the new node, or NULL if failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *newNode = (list_t *)malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	if (!newNode->str)
		return (NULL);

	newNode->len = strlen(str);
	newNode->next = NULL;

	if (!*head)
	{
		head->next = newNode;
	} else
	{
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = newNode;
	}

	return (newNode);
}
