#include "lists.h"

/**
**insert_nodeint_at_index - node at index
*@head: pointer to the pointer head list
*@idx: index
*@n: int n
*Return: The address of the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *node = *head;

	if (idx == 0 || !*head)
	{
		new_node = add_nodeint(head, n);
		return (new_node);
	}

	while (node)
	{
		if (i == idx - 1)
		{
			new_node = malloc(sizeof(listint_t));
			if (!new_node)
				return NULL;

			new_node->n = n;
			new_node->next = node->next;
			node->next = new_node;
			return (new_node);
		}
		node = node->next;
		i++;
	}
	return (NULL);
}
