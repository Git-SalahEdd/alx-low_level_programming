#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *@n: parameter of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int var = 1;

	if (n > 0)
	{
	while (var <= n)
	{
	int v = 1;

	var++;

	while (v <= var)
	{
		_putchar(32);
		v++;
	}
	_putchar(92);
	_putchar('\n');
	}
	}
	else if (n <= 0)
	{
	_putchar('\n');
	}
}
