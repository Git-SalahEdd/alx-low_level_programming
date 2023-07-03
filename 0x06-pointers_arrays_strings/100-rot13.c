#include "main.h"

/**
**rot13 - encodes a string using rot13
*@s: parameter
*Return: final result
*/

char *rot13(char *s)
{
	int i, k;
	char rot13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ROT13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; k < 52; k++)
		{
		if (s[i] == rot13[k])
		{
		s[i] = ROT13[k];
		break;
		}
		}
	}
	return (s);
}
