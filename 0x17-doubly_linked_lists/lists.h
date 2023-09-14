/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */

/* labs */
#include <stddef.h>
#include <stdio.h>

typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* functions */
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);