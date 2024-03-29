#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: Pointer to a pointer to the head of the linked list
 * @str: String to be duplicated and added to the new node
 *
 * Return: adress of new element or NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

		if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
