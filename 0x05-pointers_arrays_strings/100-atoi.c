#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int _atoi(char *s)
{
	unsigned int x = 0;
	int pn = 1;

do
{
	if (*s == '-')
	{
		pn *= -1;
	}
	else if (*s >= '0' && *s <= '9')
	{
		x = (*s - '0') + (x * 10);
	}
	else if ( x > 0)
	{
		break;
	}
} while (*s++);
return (pn * x);
}
