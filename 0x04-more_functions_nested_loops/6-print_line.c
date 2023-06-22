#include "main.h"

/**
 * print_line - print n line
 * @n: number of line will be printed
 * Return: void
 */

void print_line(int n)
{
	int var = 1;

	while (var <= n)
	{
	_putchar(95);
	var++;
	}
	_putchar('\n');
}
