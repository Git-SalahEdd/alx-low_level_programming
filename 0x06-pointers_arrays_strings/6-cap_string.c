#include "main.h"
#include <stdio.h>

/**
**cap_string - capitalizes all words of a string
*@s: the string to be capi
* Return: final string
*/

char *cap_string(char *s)
{
	int i = 0, j = -1;

while (s[i] != '\0')
{
i++;
}
while (j <= i)
{
if ((s[j] < 97 || s[j] > 122) && (s[j] < 65 || s[j] > 90))
{
	if (s[j + 1] >= 97 && s[j + 1] <= 122)
	{
		s[j + 1] -= 32;
	}
}
j++;
}
return (s);
}