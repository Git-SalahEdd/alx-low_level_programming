#include "main.h"

/**
*_atoi - string to an integer.
*@s: parameter string to be edited
* Return: Always numbers found in the string.
*/

int _atoi(char *s)
{
	unsigned int x = 0;
	int pn = 1;

do {
	if (*s == '-')
	{
		pn *= -1;
	}
	else if (*s >= '0' && *s <= '9')
	{
		x = (*s - '0') + (x * 10);
	}
	else if (x > 0)
	{
		break;
	}
} while (*s++);
return (pn * x);
}
