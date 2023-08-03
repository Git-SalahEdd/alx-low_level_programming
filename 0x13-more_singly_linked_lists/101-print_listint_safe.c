#include "lists.h"

/**
*lpd_listint_len - Counts the number of unique idx
*in a looped listint_t linked list.
*@head: A pointer to the head of the listint_t to check.
*Return: If the list is not looped - 0.
*Otherwise - the number of unique idx in the list.
*/

size_t lpd_listint_len(const listint_t *head)
{
	const listint_t *ptr2, *ptr1;
	size_t idx = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	ptr2 = head->next;
	ptr1 = (head->next)->next;

	while (ptr1)
	{
		if (ptr2 == ptr1)
		{
			ptr2 = head;
			while (ptr2 != ptr1)
			{
				idx++;
				ptr2 = ptr2->next;
				ptr1 = ptr1->next;
			}

			ptr2 = ptr2->next;
			while (ptr2 != ptr1)
			{
				idx++;
				ptr2 = ptr2->next;
			}

			return (idx);
		}

		ptr2 = ptr2->next;
		ptr1 = (ptr1->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of idx in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t idx, index = 0;

	idx = lpd_listint_len(head);

	if (idx == 0)
	{
		for (; head != NULL; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < idx; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (idx);
}
