#include "variadic_functions.h"

/**
*print_strings - function that prints strings, followed by a new line.
*@separator: sep char
*@n: argc
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *v;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		v = va_arg(args, char*);
		if (v == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", v);
		}
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
