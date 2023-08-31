#include "lists.h"

/**
 * sum_listint - Calculates the sum of all data (n) in a listint_t linked list.
 * @head: Pointer to the head of the list.
 * Return: The sum of all data (n) in the list, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

