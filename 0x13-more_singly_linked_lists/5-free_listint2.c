#include "lists.h"

/**
*free_listint2 - frees a list_t list.
*@head: ptr to head node
*/

void free_listint2(listint_t **head)
{
	listint_t *node, *next_node;

	if (!head)
		return;
	node = *head;
	while (node)
	{
		next_node = node;
		node = node->next;
		free(next_node);

	}
	*head = NULL;
}
