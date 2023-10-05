#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

    if (!ht || !key || !value)
        return 0;

    unsigned long int hash_code = hash_djb2(key);
    unsigned long int current_idx = key_index(hash_code, ht->size);

    // fix me
    hash_node_t *new = malloc(sizeof(hash_node_t));
    if (!new)
        return 0;

    new->key = key;
    new->value = value;
    new->next = NULL;

    // check if these any coltion
    if (ht->array[current_idx])
    {
        printf("Hello mf!\n");
    }
}

// make hash code
// get index of the key
// make a node that have value and key
// add the new node
// check for clotion
