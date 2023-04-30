#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list
 * @head: pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *crr;

	if (*head == NULL)
		return;

	while (*head)
	{
		crr = (*head)->next;
		free(*head);
		*head = crr;
	}
	*head = NULL;
}
