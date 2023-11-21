#include "lists.h"

/**
* print_dlistint -  prints all the elements of a dlistint_t list
* @h: ptr to head of linked list
*
* Return: number of elements
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (c);
}
