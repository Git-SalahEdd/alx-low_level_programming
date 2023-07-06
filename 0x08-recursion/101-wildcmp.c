#include "main.h"

/**
*wildcmp -  compares two strings that can be considered identical
*@s1: string1
*@s2: string2
*Return: 0 or 1
*/

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
{
	if (*s2 != '\0' && *s2 == '*')
	{
	return (wildcmp(s1, s2 + 1));
	}
	return (*s2 == '\0');
}
if (*s2 == '*')
{
	return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
else if (*s1 == *s2)
{
	return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}
