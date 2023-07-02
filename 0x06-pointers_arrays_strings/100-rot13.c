#include "main.h"

/**
**rot13 - encodes a string using rot13
*@s: parameter
* Return: final result
*/

char *rot13(char *s)
{
	int i = 0, k;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{
		while (k <= 52)
		{
		if (s[i] == rot13[i])
		{
		s[i] = rot13[i];
		break;
		}
		}
		i++;
	}
	return (s);
}
