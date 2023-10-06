#include "hash_tables.h"

/**
 * create_new_node - Creates a new hash table node.
 * @key: The key for the new node.
 * @value: The value for the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (!new_node->key || !new_node->value)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (NULL);
	}

	return (new_node);
}

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
	unsigned long int current_idx;
	hash_node_t *new_node;

	if (!ht || !key || !value)
		return (0);

	current_idx = key_index((unsigned char *)key, ht->size);
	new_node = create_new_node(key, value);

	if (!new_node)
		return (0);

	if (!ht->array[current_idx])
	{
		ht->array[current_idx] = new_node;
	}
	else
	{

		new_node->next = ht->array[current_idx];
		ht->array[current_idx] = new_node;
	}

	return (1);
}
