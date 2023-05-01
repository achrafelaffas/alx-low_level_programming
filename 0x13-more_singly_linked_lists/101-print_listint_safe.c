#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 *
 * @head: pointer to the 1st node
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	long int a;
	size_t count;

	while (head)
	{
		a = head - head->next;
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (a > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (count);
}
