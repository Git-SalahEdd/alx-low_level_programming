#include "lists.h"

/**
**get_nodeint_at_index - returns the nth node of a listint_t linked list.
*@head: head of node
*@index: is the index of the node, starting at0
*Return: if the node does not exist, return NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = head;

	while (node)
	{
		i++;
		if (i == index)
		{
			return (node);
		}
		node = node->next;
	}
	return (node);
}
