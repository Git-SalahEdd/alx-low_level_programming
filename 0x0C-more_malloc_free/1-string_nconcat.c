#include "main.h"

/**
 * string_nconcat -  concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: number of chars from s2
 * Return: new string pointer which holds s1 and s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0, l = 0, k = 0;

	if (s1 == NULL)
	{s1 = ""; }
	if (s2 == NULL)
	{s2 = ""; }
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n >= j)
	{
		n = j;
	}
	ptr = malloc(sizeof(char) * (i + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (s1[l] != '\0')
	{
		ptr[l] = s1[l];
		l++;
	}
	for (k = 0; n > k; k++)
	{
		ptr[l + k] = s2[k];
	}
	ptr[l + k] = '\0';
	return (ptr);
}
