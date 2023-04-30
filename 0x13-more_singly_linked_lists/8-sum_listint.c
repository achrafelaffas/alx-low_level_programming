#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list
 *
 * @head: first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *node = head;

	while (node)
	{
		s += node->n;
		node = node->next;
	}
	return (s);
}
