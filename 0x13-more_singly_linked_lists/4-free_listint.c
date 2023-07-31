#include "lists.h"

/**
*free_list - frees a list_t list.
*@head: ptr to head node
*/

void free_listint(listint_t *head)
{
	list_t *node, *next_node;

	if (!head)
		return;
	node = head;
	while (node)
	{
		next_node = node->next;
		free(node->n);
		free(node);
		node = next_node;
	}
}
