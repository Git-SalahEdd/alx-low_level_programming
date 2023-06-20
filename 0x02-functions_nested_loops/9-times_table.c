#include "main.h"

/**
 * times_table - print table 9 time
 */

void times_table(void)
{
	int a, b, calc;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{

			calc = a * b;
			if (calc <= 9)
			{
				_putchar(' ');
				_putchar(calc + '0');
			}
			else
			{
				_putchar((calc / 10) + 48);
				_putchar((calc % 10) + 48);
			}
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

	_putchar('\n');
	}
}
