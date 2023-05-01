#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the first node
 *
 * Return: pointer to the 1st node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node = NULL;
	listint_t *prev_node = NULL;

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}
	*head = prev_node;
	return (*head);
}
