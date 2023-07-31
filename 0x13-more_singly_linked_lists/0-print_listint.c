#include "lists.h"

/**
*print_listint - prints all the elements of a listint_t list.
*@h: head of the node
*Return: nbr of node elements
*/

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
