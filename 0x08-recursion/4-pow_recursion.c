#include "main.h"

/**
 * _pow_recursion - power of a number in recursion function
 * @x: parameter int
 * @y: parameter int
 * Return: Always 0 for success
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * (_pow_recursion(x, y - 1)));
}
