#include "lists.h"

/***/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		head = head->next; 
		i++;
		if (i == index)
		{
			return (head);
		}
	}
	return (NULL);
}
