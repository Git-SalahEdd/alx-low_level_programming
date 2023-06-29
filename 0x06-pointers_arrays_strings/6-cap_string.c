#include "main.h"
#include <stdio.h>

/**
**cap_string - capitalizes all words of a string
*@s: the string to be capi
* Return: final string
*/

char *cap_string(char *s)
{
	int j = 0;

while (s[j])
{
	while(!(s[j] >= 97 && s[j] <= 122))
		j++;
if (s[j - 1] == ' ' ||
s[j - 1] == '\t' ||
s[j - 1] == '\n' ||
s[j - 1] == ',' ||
s[j - 1] == ';' ||
s[j - 1] == '.' ||
s[j - 1] == '!' ||
s[j - 1] == '?' ||
s[j - 1] == '"' ||
s[j - 1] == '(' ||
s[j - 1] == ')' ||
s[j - 1] == '{' ||
s[j - 1] == '}' ||
j == 0)

s[j] -= 32;

j++;
}
return (s);
}
