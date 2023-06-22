#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 0-14
 */

void more_numbers(void)
{
	for (int var = 0; var <= 10; var++)
	{
		for (int var2 = 0; var2 <= 14; var2++)
		{
			if (var2 >= 10)
			{
			_putchar(var2 / 10 + '0');
			}
			_putchar(var2 % 10 + '0');
		}
		var++;
		_putchar('\n');
	}
}
