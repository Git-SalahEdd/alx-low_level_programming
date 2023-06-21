#include "main.h"

/**
 * print_times_table - print n times table
 * @n: parameter (integer) for time table
 */

void print_times_table(int n)
{
	int a, b, calc;

if ((n < 15) && n > 0)
{
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			calc = a * b;
			if (calc < 10)
			{
				_putchar(calc + '0');
			if (b == n)
			continue;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			else if ((calc > 9) && (calc < 100))
			{
				_putchar('0' + (calc / 10));
				_putchar('0' + (calc % 10));
			if (b == n)
			continue;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if ((calc >= 100) && (calc <= 144))
			{
			_putchar('0' + (calc / 100));
			_putchar('0' + (calc / 10) % 10);
			_putchar('0' + (calc % 10));
			if (b == n)
			continue;
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
_putchar('\n');
}
