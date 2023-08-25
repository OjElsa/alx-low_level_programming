#include "main.h"

/**
 * _calloc - allocates memory for an array of
 * @nmemb elements of
 * @size bytes each and returns a pointer
 * to the allocated memory.
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	unsigned int x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	i = malloc(nmemb * size);
	if (i == NULL)
		return (NULL);
	for (x = 0; x < (nmemb * size); x++)
		i[x] = 0;
	return (i);
}
