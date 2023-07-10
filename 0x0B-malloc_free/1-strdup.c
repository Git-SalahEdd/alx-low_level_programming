#include "main.h"

/**
**_strdup - copy of the string given as a parameter
*@str: string to copy
*Return: pointer
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	for ( ; str[size] != '\0'; size++)
		p = malloc(size * sizeof(*str) + 1);

	if (p == 0)
	{
		return (NULL);
	}
	else
	{
		for ( ; i < size; i++)
			p[i] = str[i];
	}

	return (p);
}
