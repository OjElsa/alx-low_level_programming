#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t linked list
 * @h: Pointer to the listint_t list
 * Return: The number of nodes in the list
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}

	return (node_count);
}

