#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 -  frees a listint_t list
 * @head: pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *mvn;
	listint_t **temp = head;

	if (temp != NULL)
	{
		while (*head != NULL)
		{
			mvn = *head;
			free(mvn);
			*head = (*head)->next;
		}
		*temp = NULL;
	}
}
