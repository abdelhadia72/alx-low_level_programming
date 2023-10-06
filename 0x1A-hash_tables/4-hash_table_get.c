#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to search for.
 *
 * Return: The value associated with the given key, or NULL if key not found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	node = ht->array[idx];

	while (node || idx)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}

		node = node->next;
	}

	return (NULL);
}
