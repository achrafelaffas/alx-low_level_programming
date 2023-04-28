#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *active_node;

	while ((active_node = head) != NULL)
	{
		head = head->next;
		free(active_node->str);
		free(active_node);
	}
}
