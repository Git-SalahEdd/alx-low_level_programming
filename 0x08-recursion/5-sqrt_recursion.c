#include "main.h"

/**
*_sqrt_recursion - returns the natural square root of a num
*@n: parameter int looking for all his sqr natural roots
*Return: final result
*/

int _sqrt_recursion(int n)
{
	return (skwer(n, 1));
}

/**
*rsqr - find square root
*@n: parameter
*@m: parameter
* Return: final result int
*/

int skwer(int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}
	else if (m * m < n)
	{
		return (skwer(n, m + 1));
	}
	else
	{
		return (-1);
	}
}
