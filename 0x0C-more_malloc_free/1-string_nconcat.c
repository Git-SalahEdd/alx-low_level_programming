#include "main.h"

/**
**string_nconcat - function that concatenates two strings
*@s1: string1
*@s2: string2
*@n: n bytes
*Return: final result
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size1 = _strL(s1);
	char *p = malloc((size1 + n + 1) * sizeof(char));

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (p == NULL)
	{
		return (NULL);
	}
	_strncat(p, s1, size1);
	_strncat(p + size1, s2, n);
	return (p);
}

/**
*_strL - calc lenth of string
*@st: string
*Return: final result
*/

int _strL(char *st)
{
	int i = 0;

	while (st[i] != '\0')
		i++;
	return (i);
}

/**
**_strncat - concatenates two strings
*@dest: parameter1
*@src: parameter2
*@n: to n bytes
*Return: funal result
*/

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strL(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
