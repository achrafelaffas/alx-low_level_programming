#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 -  frees a listint_t list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
listint_t *temp;
listint_t **node = head;

if (head == NULL)
return;

while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}

*node = NULL;
}
