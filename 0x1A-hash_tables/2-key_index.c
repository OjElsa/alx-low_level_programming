#include "hash_tables.h"

/**
 * key_index - gets the index of the specified key
 * @key: is the key
 * @size: is the size of the array of the hash table
 *
 * Return: index at which the key pair is stored in the array of the hash table
 * 0 ortherwise
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (!key)
		return (0);
	if (size > 0)
	{
		index = hash_djb2(key);
		return (index % size);
	}
	return (0);
}
