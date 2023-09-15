#include "lists.h"

/**
 * print_dlistint - print a doubly linked lists content
 *
 *
 * @h: pointer to the head of the list to print
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n_total;

	for (n_total = 0; h != NULL; n_total++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (n_total);
}

