#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 0-14
 */

void more_numbers(void)
{
	int var = 0;
	int var2 = 0;

	while (var <= 10)
	{
		while (var2 <= 14)
		{
			if (var2 >= 10)
			{
			_putchar(var2 / 10 + '0');
			}
			_putchar(var2 % 10 + '0');
		var2++;
		}
		var++;
		_putchar('\n');
	}
}
