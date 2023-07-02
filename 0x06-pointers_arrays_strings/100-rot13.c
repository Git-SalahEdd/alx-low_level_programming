#include "main.h"

/**
**rot13 - encodes a string using rot13
*@s: parameter
* Return: final result
*/

char *rot13(char *s)
{
	int i;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *p = s;

	while (*s)
	{
		while (i <= 52)
		{
		if (*s == rot13[i])
		{
		*s = ROT13[i];
		break;
		}
		}
		s++;
	}
	return (p);
}
