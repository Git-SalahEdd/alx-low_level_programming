#include "main.h"

/**
 * _islower - check for lowercase
 * Return: return 1 if c is lowercase, 0 otherwise
 * @c: parameter (int) to check if lowercase or not
 */

int _islower(int c)
{
	int rst = c;

	if (rst >= 97 && rst <= 122)
	{
		rst = 1;
	}
	else
	{
		rst = 0;
	}
	return (rst);
}
