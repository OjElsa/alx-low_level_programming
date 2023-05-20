#include "main.h"

/**
 * _realloc - realocates a memory block using
 * malloc and free
 * ptr:is a pointer to the mem previously allocated
 * old_size:is the new size in bytes allocated for ptr
 * new_size:is the new size allocated for new mem block
 * Return: the new size, in bytes of the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *j;
	unsigned int x, y = new_size;
	char *oldj = ptr;

	if (ptr == NULL)
	{
		j = malloc(new_size);
		return (j);
	}
	else if (new_size == old_size)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	j = malloc(new_size);
	if (j == NULL)
		return (NULL);
	if (new_size > old_size)
		y = old_size;
	for (x = 0; x < y; x++)
		j[x] = oldj[x];
	free(ptr);
	return (j);
}
