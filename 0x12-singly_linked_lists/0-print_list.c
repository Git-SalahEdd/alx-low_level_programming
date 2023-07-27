#include "lists.h"

/**
*_strlen - string len
*@s: string
*Return: len of str
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
*print_list - print all element of a list
*@list_t
*Return: nbr of elements
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
