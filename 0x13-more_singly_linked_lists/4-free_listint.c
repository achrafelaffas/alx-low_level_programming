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
	while (head)
		free(head);
}
