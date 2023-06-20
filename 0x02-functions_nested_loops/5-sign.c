#include "main.h"

/**
 * print_sign - check sign for numbers
 * Return: return 1 , 0 or -1
 * @n: parameter (int) to check sign
 */

int print_sign(int n)
{
	int rst = n;

	if (rst > 0)
	{
		rst = 1;
		_putchar('+');
	}
	if (rst == 0)
	{
		rst = 0;
		_putchar('0');
	}
	else if (rst < 0)
	{
		rst = -1;
		_putchar('-');
	}
	return (rst);
}
