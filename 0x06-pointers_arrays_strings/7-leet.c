#include "main.h"

/**
**leet - encodes a string into 1337
*@s: parameter
* Return: return final result
*/

char *leet(char *s)
{
int y = 0, x = 0;
char stg0[] = "aAeEoOtTlL";
char stg00[] = "4433007711;

for (; y < 10; y++)
{
	for(; x < 10; x++)
	{
		if(s[y] == s[x])
		{
			s[y] = stg00[x];
		}
	}
}
return (s);
}
