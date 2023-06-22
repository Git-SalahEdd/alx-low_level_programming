#include "main.h"

/**
 *print_square -  prints a square
 *@size: size of the square
 */

void print_square(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
		int n = 0;

		while (n < size)
		{
		int m = 0;

		while (m < size)
		{
			_putchar('#');
			m++;
		}
		n++;
		_putchar('\n');
		}
	}
}
