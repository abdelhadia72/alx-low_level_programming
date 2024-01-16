#include "search_algos.h"

/**
 * jump_list - searching in linked list using Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in the list
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located, or NULL on failure
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	step_size = sqrt(size);

	for (node = jump = list; jump != NULL &&
	jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (step += step_size; jump != NULL
		&& jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		if (jump != NULL)
			printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	if (node != NULL && jump != NULL)
		printf("Value found between indexes [%ld] and [%ld]\n",
		node->index, jump->index);

	for (; node != NULL && node->index <= jump->index &&
	node->n < value; node = node->next)
	{
		if (node != NULL)
			printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	}

	return (node != NULL && node->n == value ? node : NULL);
}
