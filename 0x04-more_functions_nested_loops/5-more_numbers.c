#include "main.h"

/**
 * more_numbers -prints 10 times the numbers 0-14
 * Return:void
 */

void more_numbers(void)
{
	int var = -1;
	int var2 = 0;

	while (var <= 10)
	{
		var++;
		for (var2 = 0; var2 <= 14; var2++)
		{
			if (var2 >= 10)
			{
				_putchar(var2 / 10 + '0');
			}
				_putchar(var2 % 10 + '0');
		}
		_putchar('\n');

	}
}
