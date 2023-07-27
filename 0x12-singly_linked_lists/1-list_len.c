#include "lists.h"

/**
*list_len - number of elements in a linked list_t list.
*@h: ptr to list
*Return: nbr of elem
*/

size_t list_len(const list_t *h)
{
	size_t = 0;

	while(h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
