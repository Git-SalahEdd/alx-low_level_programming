#include "main.h"

/**
*_strspn - gets the length of a prefix substring
*@s: string
*@accept: consist only of bytes from accept
*Return: Returns the number of bytes in the initial segment
*/

unsigned int _strspn(char *s, char *accept)
{
	int b = 0, j;

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
		if (*s == accept[j])
		{
		b++;
		break;
		}
		else if (accept[j +1] == '\0')
			return (b);
		}
		s++;
	}
	return (b);
}
