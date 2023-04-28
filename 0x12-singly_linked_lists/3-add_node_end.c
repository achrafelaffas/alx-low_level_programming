#include "lists.h"

/**
* add_node_end - adds a node at the end
* of a list_t list.
* @head: head of the linked list.
* @str: string to store in the list.
* Return: address of the head.
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *n_node, *c_node;
size_t n;

n_node = malloc(sizeof(list_t));
if (n_node == NULL)
return (NULL);

n_node->str = strdup(str);

for (n = 0; str[n]; n++)
;

n_node->len = n;
n_node->next = NULL;
c_node = *head;

if (c_node == NULL)
{
*head = n_node;
}
else
{
while (c_node->next != NULL)
c_node = c_node->next;
c_node->next = n_node;
}

return (*head);
}
