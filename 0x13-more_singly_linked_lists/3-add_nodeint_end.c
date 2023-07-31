#include "lists.h"

/**
**add_nodeint_end - adds a new node at the end of a listint_t list.
*@head: head of the node
*@n: element to add
*Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_h = malloc(sizeof(listint_t));
	listint_t *hd_ad = *head;

	if (!head || !new_h)
		return (NULL);
	new_h->n = n;
		if (hd_ad)
		{
			while (hd_ad->next)
			hd_ad = hd_ad->next;
			hd_ad->next = new_h;
		}
		else
		{
		*head = new_h;
		}
		return (new_h);
}
