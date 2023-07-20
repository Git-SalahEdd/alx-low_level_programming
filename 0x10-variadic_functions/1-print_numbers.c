#include "variadic_functions.h"

/**
*print_numbers - 
*
* *
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d%s ", va_arg(args, int), separator);
	}
	printf("\n");
	va_end(args);
}
