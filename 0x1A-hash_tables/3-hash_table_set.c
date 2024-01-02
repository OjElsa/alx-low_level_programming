#include "hash_tables.h"

/**
 * create_node - Creates node of a linked list
 * @key: Key for the data
 * @value: Data to be store
 *
 * Return: Pointer to the created node, NULL if else
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	char *key_copy = strdup(key);
	char *value_copy = strdup(value);

	if (!key || !value || !key_copy || !value_copy)
		return (NULL);
	new_node = malloc(sizeof(*new_node));
	if (!new_node)
	{
		free(key_copy);
		free(value_copy);
		return (NULL);
	}
	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = NULL;
	return ((void *)new_node);
}

/**
 * hash_table_set - Adds or updates a value of the provided key
 * @ht: Hash table
 * @key: Key
 * @value: Value to be set or updated
 *
 * Return: 1 if entry added/updated successfully, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL, *temp = NULL;
	char *new_node = NULL;

	if (!ht || !(ht->array) || !key || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	if (!node)
	{
		temp = create_node(key, value);
		if (!temp)
			return (0);
		ht->array[index] = temp;
		return (1);
	}
	else if (node->key && (strcmp(node->key, key) == 0))
	{
		if (strcmp(node->value, value) == 0)
			return (1);
		new_node = strdup(value);
		if (!new_node)
			return (0);
		free(node->value);
		node->value = new_node;
		return (1);
	}
	else if (node->key && (strcmp(node->key, key) != 0))
	{
		temp = create_node(key, value);
		temp->next = ht->array[index];
		ht->array[index] = temp;
		return (1);
	}
	else
		return (0);
}
