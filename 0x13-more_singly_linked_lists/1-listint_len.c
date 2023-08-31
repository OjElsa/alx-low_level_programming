#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t linked list.
 * @h: Pointer to the listint_t list.
 * Return: The number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t element_count = 0;

	while (h != NULL)
	{
		element_count++;
		h = h->next;
	}

	return (element_count);
}

