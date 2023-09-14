#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *newNode = malloc(sizeof(dlistint_t));
    dlistint_t *current;

    if (!newNode)
        return (NULL);

    newNode->n = n;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (!*head)
    {
        *head = newNode;
        return (newNode);
    }

    current = *head;
    while (current->next)
        current = current->next;

    current->next = newNode;
    newNode->prev = current;

    return (newNode);
}
