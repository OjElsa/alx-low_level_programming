#include "hash_tables.h"

/**
 * hash_table_get - Returns the value assocaited with the key in the hash table
 * @ht: Pointer to the hash table
 * @key: Key to search for
 *
 * Return: The value associated with the key in the hash table
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (!node)
		return (NULL);
	return (node->value);
}
