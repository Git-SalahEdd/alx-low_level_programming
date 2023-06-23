#include "main.h"

/**
 *
 * 
 */



void print_number(int n)
{
	unsigned int var = n;
	
	if (n < 0)
	{
		n = -n;
		var = n;
		_putchar('-');
	}

	var /= 10;
	if (var != 0)
	{
		print_number(var);
	}
	_putchar((unsigned int) n % 10 + '0');
}
