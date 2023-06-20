#include "main.h"

/**
 * _abs: return abs of value
 * Return: abs of the value
 * @abs: parameter (int) return the abs of the value
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
