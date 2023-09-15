#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *
 * @head: pointer to pointer to the head of the list
 * @n: value to add to the head
 * Return: the address of the new element,
 * or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (current->next)
			current = current->next;

		new->prev = current;
		current->next = new;
	}
	return (new);
}
