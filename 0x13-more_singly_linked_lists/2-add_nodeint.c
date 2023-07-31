#include "lists.h"

/**
**add_nodeint - adds a new node at the beginning of a listint_t list.
*@n: element to add
*@head: ptr nod list of elem
*Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nod = malloc(sizeof(listint_t));

	if (!head || !new_nod)
		return (NULL);
			new_nod->n = n;
			new_nod->next = *head;
			*head = new_nod;
			return (new_nod);
}
