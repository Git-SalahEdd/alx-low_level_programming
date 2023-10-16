#include "main.h"

/**
 * _abs - check for abs value
 * Return: return abs value
 * @abs: parameter (int) to return abs value
 */

int _abs(int abs)
{
	int abs2 = abs;

	if (abs2 < 0)
	{
		return (-abs2);
	}
	else
	{
		return (abs2);
	}
}
