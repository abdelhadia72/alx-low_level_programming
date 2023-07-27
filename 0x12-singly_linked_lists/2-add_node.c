#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Pointer to the head of the list.
 * @str: String to be stored in the new node.
 * Return: Address of the new node, or NULL if failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = (list_t *)malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);

	if (!newNode->str)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(newNode->str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);

}
