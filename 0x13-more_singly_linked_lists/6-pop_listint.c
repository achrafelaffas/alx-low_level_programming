#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 *
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the head node, 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);
	n = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;

	return (n);
}
