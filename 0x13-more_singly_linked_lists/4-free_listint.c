#include "lists.h"

/**
 * free_listint -  frees a listint_t list
 *
 * @head: pointer to the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *crr;

	while (head)
	{
		crr = head->next;
		free(head);
		head = crr;
	}
}
