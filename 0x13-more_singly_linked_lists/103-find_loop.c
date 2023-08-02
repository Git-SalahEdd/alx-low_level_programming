#include "lists.h"

/**
*find_listint_loop - finds the loop in a linked list
*@head: linked list to search for
*Return: address of the node where the loop starts, or NULL
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slw_ptr = head, *fst_ptr = head;

	if (!head)
		return (NULL);

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
			return (slw_ptr);
		}
	}
	return (NULL);
}
