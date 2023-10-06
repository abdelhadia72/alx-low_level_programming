#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table.
 * @size: The size of the array in the hash table.
 *
 * Return: A pointer to the newly created hash table, or NULL if it fails.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int i = 0;

	if (!size)
		return (NULL);

	/* create a hash table */
	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);

	/* create the array now */
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);

	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	/* fill all nodes with null to know the end*/
	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}

	/* return the new table */
	return (new_table);
}
