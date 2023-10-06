#include "hash_tables.h"

/**
 * hash_table_print - Prints the key-value pairs of a hash table.
 * @ht: A pointer to the hash table.
 *
 * Description: This function prints the key-value pairs of a hash table
 * in the format: '{'key': 'value', 'key': 'value', ...'}'.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int ones = 0;
	hash_node_t *node;

	if (!ht)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (ones)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			ones = 1;
		}
	}

	printf("}\n");
}
