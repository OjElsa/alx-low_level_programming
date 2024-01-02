#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Pointer to the hash table
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int b;
	hash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");

	for (b = 0; b < ht->size; b++)
	{
		current = ht->array[b];

		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);

			if (current->next != NULL || b < ht->size - 1)
			{
				printf(", ");
			}
			current = current->next;
		}
	}
	printf("}\n");
}
