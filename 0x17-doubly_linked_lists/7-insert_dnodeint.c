#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_len *newNode = malloc(sizeof(dlistint_t));

    if (!newNode)
        return (NULL);
}