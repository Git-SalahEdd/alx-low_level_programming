#include "main.h"

/**
* print_numbers - prints the numbers, from 0 to 9, followed by a new line.
*/

void print_numbers(void)
{
	int var = 0;

	while (var <= 9)
	{
		_putchar(var + '0');
		var++;
	}
	_putchar('\n');
}
