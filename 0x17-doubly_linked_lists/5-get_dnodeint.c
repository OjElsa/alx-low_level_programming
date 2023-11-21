#include "lists.h"

/**
* get_dnodeint_at_index - Searches and returns the node at the given index.
* @head: Pointer to the head of the node
* @index: Index position of the node to be look for
*
* Return: The nth node of a doubly linked list , NULL otherwise
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	while (head)
	{
		if (index == 0)
			return (head);
		--index;
		head = head->next;
	}
	if (index == 0)
		return (head);
	return (NULL);
}
