#include "main.h"

/**
**_strchr - locates a character in a string
*@c: character to locate
*@s: string
* Return: NULL if not found
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
		return (s + i);
		}
	}
	return (NULL);
}

