#include "main.h"

/**
**str_concat - concatenates two strings
*@s1: string1
*@s2: string2
*Return: final result
*/

char *str_concat(char *s1, char *s2)
{
	int i = 0, size1 = 0, size2 = 0, j = 0, k = 0, sp = 0, spf = 0;
	char *p;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	for ( ; s1[i] != '\0'; i++)
	{
		size1++;
	}
	for ( ; s2[j] != '\0'; j++)
	{
		size2++;
	}
	sp = size1 + size2;
	p = malloc((size1 + size2) * sizeof(char) + 1);
	if (p == 0)
	{
	return (0);
	}
	spf = size1 + size2;
	for ( ; k < size1; k++)
	{
		p[k] = s1[k];
	}
	while (sp >= size1)
	{
		p[sp] = s2[size2];
		sp--;
		size2--;
	}
	p[spf] = '\0';
	return (p);
}
