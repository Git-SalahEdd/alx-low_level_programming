#include "variadic_functions.h"

/**
*print_numbers - prints numbers, followed by a new line
*@separator: sep char
*@n: argc
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1 || separator == NULL)
		{
			printf("%d", va_arg(args, int));
			continue;
		}
		printf("%d%s", va_arg(args, int), separator);
	}
	va_end(args);
	printf("\n");
}
