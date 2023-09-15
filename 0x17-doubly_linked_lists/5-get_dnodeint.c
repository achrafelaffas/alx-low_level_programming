#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 * @head: pointer to the head of the list
 * @index: the index of the node, starting from 0
 * Return: nothing
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (i < index && current)
	{
		/* picks the next value which is at the index */
		current = current->next;
		i++;
	}
	if (!current)
		return (NULL);

	return (current);
}
