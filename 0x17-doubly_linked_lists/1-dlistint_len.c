#include "lists.h"

/**
 * print_dlistint - Prints the elements of a doubly linked list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
    const dlistint_t *current = h;
    size_t size = 0;

    while (current)
    {
        size++;
        current = current->next;
    }
    return (size);
}