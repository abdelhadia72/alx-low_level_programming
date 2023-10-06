#include "hash_tables.h"

/**
 * create_new_node - Creates a new node and
 * initializes it with the given key and value.
 * @key: The key, a non-empty string.
 * @value: The value associated with the key, can be an empty string.
 *
 * Return: Pointer to the new node, or NULL if malloc failed.
 */
shash_node_t *create_new_node(const char *key, const char *value)
{
	shash_node_t *node = malloc(sizeof(shash_node_t));

	if (node == NULL)
		return (NULL);

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}

	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	node->next = NULL;
	node->sprev = NULL;
	node->snext = NULL;

	return (node);
}

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: Number of array slots for the table.
 *
 * Return: Pointer to the created hash table, or NULL if malloc failed.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}

/**
 * shash_table_get - Retrieves the value associated with a key.
 * @ht: Pointer to the sorted hash table.
 * @key: The key, a non-empty string.
 *
 * Return: The value associated with the key
 * or NULL if the key can't be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);

	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Print the key
 * and value pairs in the sorted hash table.
 * @ht: The sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int count = 0;
	shash_node_t *node = ht->shead;

	if (ht == NULL)
		return;

	printf("{");
	while (node != NULL)
	{
		if (count > 0)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		count++;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the key
 * and value pairs in reverse order.
 * @ht: The sorted hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int count = 0;
	shash_node_t *node = ht->stail;

	if (ht == NULL)
		return;

	printf("{");
	while (node != NULL)
	{
		if (count > 0)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		count++;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *node;

	while (i < ht->size)
	{
		while (ht->array[i] != NULL)
		{
			node = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = node;
		}
		i++;
	}

	free(ht->array);
	free(ht);
}

/* helper function */

/**
 * push - Set key:value pair to the first array element.
 * @ht: Pointer to the sorted hash table.
 * @key: The key, a non-empty string.
 * @value: The value associated with the key
 * can be an empty string.
 * @index: The key's index.
 *
 * Return: The node, or NULL if failed.
 */
shash_node_t *push(shash_table_t *ht, const char *key,
				   const char *value, unsigned long int index)
{
	shash_node_t *node = create_new_node(key, value);

	if (node == NULL)
		return (NULL);

	node->next = NULL;
	ht->array[index] = node;

	return (node);
}

/**
 * updating - Updates the value of a given node.
 * @node: Pointer to the node.
 * @value: String to put at the node.
 *
 * Return: 1 on success, 0 on fail.
 */
int updating(shash_node_t *node, const char *value)
{
	if (strcmp(node->value, value) == 0)
		return (1);

	free(node->value);
	node->value = strdup(value);

	return (node->value != NULL);
}

/**
 * push_beg - Set a key:value pair node to the
 * front of the given index's list.
 * @ht: Pointer to the sorted hash table.
 * @key: The key, a non-empty string.
 * @value: The value associated with the key
 * can be an empty string.
 * @index: The key's index.
 *
 * Return: The new node, or NULL if failed.
 */
shash_node_t *push_beg(shash_table_t *ht, const char *key,
					   const char *value, unsigned long int index)
{
	shash_node_t *node = create_new_node(key, value);

	if (node == NULL)
		return (NULL);

	node->next = ht->array[index];
	ht->array[index] = node;

	return (node);
}

/**
 * slist_beg - Sets the first node in the sorted list.
 * @ht: Pointer to the sorted hash table.
 * @node: Pointer to the first node in the table.
 *
 * Return: Always 1.
 */
int slist_beg(shash_table_t *ht, shash_node_t *node)
{
	node->sprev = NULL;
	node->snext = NULL;
	ht->shead = node;
	ht->stail = node;

	return (1);
}

/**
 * add_before - Adds a new node before the given old node.
 * @ht: Pointer to the sorted hash table.
 * @old_node: The node to place the new node in front of.
 * @node: The new node to place in front of the old one.
 *
 * Return: Always 1 (success).
 */
int add_before(shash_table_t *ht, shash_node_t *old_node, shash_node_t *node)
{
	if (old_node->sprev == NULL)
		ht->shead = node;

	node->snext = old_node;
	node->sprev = old_node->sprev;
	old_node->sprev = node;

	if (node->sprev != NULL)
		node->sprev->snext = node;

	return (1);
}

/**
 * add_end - Adds a node to the end of the sorted list.
 * @ht: Pointer to the sorted hash table.
 * @node: The node to add at the end.
 *
 * Return: Always 1 (success).
 */
int add_end(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *old_node = ht->stail;

	ht->stail = node;
	node->snext = NULL;
	node->sprev = old_node;
	old_node->snext = node;

	return (1);
}

/**
 * shash_table_set - Adds or updates an element to the sorted hash table.
 * @ht: Pointer to the sorted hash table.
 * @key: The key, a non-empty string.
 * @value: The value associated with the key, can be an empty string.
 *
 * Return: 1 on success, 0 on error.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *curr_old_node;

	if (key == NULL || ht == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	if (node == NULL)
		node = push(ht, key, value, index);
	else
	{
		while (node != NULL)
		{
			if (strcmp(node->key, key) == 0)
				return (updating(node, value));
			node = node->next;
		}
		node = push_beg(ht, key, value, index);
	}

	if (node == NULL)
		return (0);

	if (ht->shead == NULL)
		return (slist_beg(ht, node));
	curr_old_node = ht->shead;
	while (curr_old_node != NULL)
	{
		if (strcmp(curr_old_node->key, node->key) >= 0)
			return (add_before(ht, curr_old_node, node));
		curr_old_node = curr_old_node->snext;
	}

	return (add_end(ht, node));
}
