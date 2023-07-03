#include "main.h"

/**
*_strspn - check the code
*
*Return: Always 0.
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
