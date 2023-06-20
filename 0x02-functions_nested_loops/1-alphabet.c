#include "main.h"

/**
*print_alphabet - function that print alphabets in low case
*/

void print_alphabet(void)
{
	int x=97;

	while (x != 122)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
