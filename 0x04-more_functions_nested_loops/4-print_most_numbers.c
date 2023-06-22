#include "main.h"

/**
* print_most_numbers - prints from 0to9, excluding 2 and 4
*/

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
	if (i == 2 || i == 4)
	{
	continue;
	}
	_putchar('0' + i);
	i++;
	}
	_putchar('\n');
}
