#include "main.h"

/**
 * print_last_digit - get number and return his last digit
 * Return: return last digit
 * @x: parameter (int) return last digit
 */

int print_last_digit(int x)
{
	int ld;

	if (x < 0)
	{
		ld = -1 * (x % 10);
	}
	else
	{
		ld = x % 10;
	}
	_putchar(ld + '0');
	return (ld);
}
