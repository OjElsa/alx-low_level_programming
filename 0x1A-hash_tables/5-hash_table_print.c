#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Pointer to the hash table
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, isPrinted = 0;

	printf("{");
	for (index = 0; ht && (index < ht->size); index++)
	{
		if (ht->array[index])
		{
			if (isPrinted)
				printf(", ");
			printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
			isPrinted = 1;
		}
	}
	printf("}\n");
}
