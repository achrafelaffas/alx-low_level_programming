#include "lists.h"

/**
 * listint_len - number of elements in a linked listint_t list.
 * @h: linked list of type listint_t to print
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
