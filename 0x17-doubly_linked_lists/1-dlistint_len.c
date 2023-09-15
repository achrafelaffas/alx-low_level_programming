#include "lists.h"

/**
 * dlistint_len - print a doubly linked lists content
 *
 *
 * @h: pointer to the head of the list
 * Return: the number of size of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t length_l;

	for (length_l = 0; h != NULL; length_l++)
		h = h->next;
	return (length_l);
}
