#include "main.h"

/**
*int factorial -  returns the factorial of a given number.
*@n: parameter nbr to input
*Return: int factorial
*/

int factorial(int n)
{
	if (n == 0)
	{
	return (1);
	}
	else if (n < 0)
	{
	return (-1);
	}
	return (n * factorial(n - 1));
}
