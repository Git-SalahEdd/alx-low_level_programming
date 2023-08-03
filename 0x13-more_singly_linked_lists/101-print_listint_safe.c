#include "lists.h"

/**
*print_listint_safe - prints a listint_t linked list.
*@head: head of nodes
*Return: the number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	int f = 0;
	size_t i = 0;
	const listint_t *slw_ptr = head, *fst_ptr = head, *loop;

	if (!head)
		exit(98);

	while (fst_ptr && fst_ptr->next)
	{
		slw_ptr = slw_ptr->next;
		fst_ptr = fst_ptr->next->next;
		if (slw_ptr == fst_ptr)
		{
			slw_ptr = head;
			while (slw_ptr != fst_ptr)
			{
				slw_ptr = slw_ptr->next;
				fst_ptr = fst_ptr->next;
			}
			loop = slw_ptr;
			break;
		}
	}
	while (head)
	{	printf("[%p] %d\n", (void *)head, head->n);
		i++;
		head = head->next;
		if (head == loop && f == 0)
		{
			f++;
			continue;
		}
		if (head == loop && f == 1)
		{
			printf("--> [%p] %d\n", (void *)loop, loop->n);
			return (i);
		}
	}
	return (i);
}
