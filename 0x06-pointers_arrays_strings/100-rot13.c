#include "main.h"

/**
**rot13 - encodes a string using rot13
*@s: parameter
* Return: final result
*/

char *rot13(char *s)
{
	int i = 0, k = 0;
	char rot13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ROT13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		while (k <= 52)
		{
		if (s[i] == rot13[k])
		{
		s[i] = rot13[k];
		break;
		}
		k++;
		}
		i++;
	}
	return (s);
}
