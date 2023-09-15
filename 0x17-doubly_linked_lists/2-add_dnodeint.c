#include "lists.h"

/**
 * add_dnodeint - adds a new node at the
 * beginning of a dlistint_t list.
 *
 * @head: pointer to pointer to the head of the list
 * @n: value to add to the head
 * Return: the address of the new element,
 * or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	if (new->next != NULL)
		(new->next)->prev = new;

	return (new);
}

