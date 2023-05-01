#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 -  frees a listint_t list
 * @head: pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *crr = *head;
	listint_t *next;

	if (head == NULL)
		return;

	while (crr != NULL)
	{
		next = crr->next;
		free(crr);
		crr = next;
	}

	head = NULL;
}
