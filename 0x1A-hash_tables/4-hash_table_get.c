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
	hash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}

	return (NULL);
}
