#include "main.h"

/**
**leet - encodes a string into 1337
*@s: parameter
* Return: return final result
*/

char *leet(char *s)
{
int y = 0, x;
char stg0[] = "aAeEoOtTlL";
char stg00[] = "4433007711";

for (; s[y] != '\0'; y++)
{
	x = 0;
	for (; x < 10; x++)
	{
		if (s[y] == stg0[x])
		{
			s[y] = stg00[x];
		}
	}
}
return (s);
}
