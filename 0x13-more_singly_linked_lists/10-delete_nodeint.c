#include "lists.h"

/**
*delete_nodeint_at_index -  deletes the node at index
*@head: head of node
*@index: idx of the node to delete
*Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = *head, *p_node;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	while (node)
	{
		if (i == index)
		{
			p_node->next = node->next;
			free(node);
			return (1);
		}
		p_node = node;
		node = node->next;
		i++;
	}
	return (-1);
}
