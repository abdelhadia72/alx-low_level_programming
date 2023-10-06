#include "hash_tables.h"

/**
 * hash_table_set - Inserts a key-value pair into a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to insert.
 * @value: The value to associate with the key.
 *
 * Return: 1 on success, 0 on failure.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	/* unsigned long int hash_code = hash_djb2(key); */
	unsigned long int current_idx = key_index((unsigned char *)key, ht->size);

	hash_node_t *current_node, *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!ht || !key || !value)
		return (0);

	/* fix me */
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	/* check of failure on allocation memory */
	if (!new_node->key || !new_node->value)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	/* check if these any collisions*/
	if (!ht->array[current_idx])
	{
		ht->array[current_idx] = new_node;
	}
	else
	{
		current_node = ht->array[current_idx];
		while (ht->array[current_idx])
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
	}

	return (1);
}
