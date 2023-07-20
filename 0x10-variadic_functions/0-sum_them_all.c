#include "variadic_functions.h"

/**
*sum_them_all - function that returns the sum of all its parameters
*@n: argc
*Return: final result
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, s;

	va_start(args, n);
	s = 0;
	for (i = 0; i < n; i++)
	{
		s += va_arg(args, int);
	}
	va_end(args);
	return (s);
}
