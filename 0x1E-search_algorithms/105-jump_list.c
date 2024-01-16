#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers using Jump search
 *
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in list
 * @value: Value to search for
 *
 * Return: A pointer to the first node where value is located,
 *         or NULL if the value is not present or if the list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t jump, prev, i;

    if (!list)
        return (NULL);

    jump = sqrt(size);
    prev = 0;

    while (list && list->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
        prev = list->index;
        for (i = 0; list && i < jump; ++i)
            list = list->next;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, prev + jump);

    while (list && list->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
        prev = list->index;
        list = list->next;
    }

    if (list && list->n == value)
    {
        printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
        return (list);
    }

    return (NULL);
}