#include "main.h"

/**
 * rev_string - reverses a string
 *@s: string will be modified
 */

void rev_string(char *s)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (j < i)
	{
	char tmp = s[j];
	s[j] = s[i];
	s[i] = tmp;
	j++;
	i--;
	}
}
