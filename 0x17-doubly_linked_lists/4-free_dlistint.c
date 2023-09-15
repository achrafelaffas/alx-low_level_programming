#include "lists.h"

/**
 * free_dlistint - adds a new node at the end of a dlistint_t list.
 *
 * @head: pointer to pointer to the head of the list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
