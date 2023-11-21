#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at a given position
* @h: Double pointer to the h pointer
* @idx: Index to add a new node at
* @n: The value of the new node
*
* Return: Address of the new node, NULL otherwise
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;

	if (!h)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		perror("malloc");
		return (NULL);
	}
	new_node->n = n;
	if (!(*h))
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	for (; *h; --idx)
	{
		if (idx == 0)
		{
			new_node->next = (*h)->next;
			new_node->prev = (*h)->prev;
			return (new_node);
		}
		*h = (*h)->next;
	}
	return (NULL);
}
