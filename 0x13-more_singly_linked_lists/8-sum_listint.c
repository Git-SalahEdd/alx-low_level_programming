#include "lists.h"

/**
*sum_listint - sum of all the data (n) of a listint_t linked list.
*@head: head of the node
*Return: sum of all data (n)
*/

int sum_listint(listint_t *head)
{
	int i = 0, sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
		i++;
	}
	return (sum);
}
