#include "lists.h"

/**
* add_dnodeint_end - Adds a node at the end of a doubly linked list.
* @head: Double pointer to the head of the linked list.
* @n: Value to store in the new node
*
* Return: Address of the new element, NULL otherwise
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *curr_ptr;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		perror("malloc");
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (!(*head))
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	curr_ptr = *head;
	while (curr_ptr->next)
		curr_ptr = curr_ptr->next;
	curr_ptr->next = new;
	new->prev = curr_ptr;

	return (new);
}
