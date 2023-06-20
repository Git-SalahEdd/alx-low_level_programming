#include "main.h"

/**
*print_alphabet_x10 - 10time alphabets low case
*/

void print_alphabet_x10(void)
{
	int t = 1;

	while (t <= 10)
	{
		int x = 97;
	while (x != 123)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
	t++;
	}
}
