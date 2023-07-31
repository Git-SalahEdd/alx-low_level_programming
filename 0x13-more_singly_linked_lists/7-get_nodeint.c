#include "lists.h"

/**
**get_nodeint_at_index - returns the nth node of a listint_t linked list.
*@head: head of node
*@index: is the index of the node, starting at0
*Return: if the node does not exist, return NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0, f = 0;
	listint_t *node = head;

	while (node)
	{
		node = node->next;
		i++;
		if (i == index)
		{
			f = 1;
			return (node);	
		}
	}
	if (f == 0)
		node = NULL;
	return (node);
}
