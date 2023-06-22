#include "main.h"

/**
* more_numbers -  prints 10 times the numbers
* from 0 to 14, followed by a new line.
*/

void more_numbers(void)
{
	int var = 0;
	int var2 = 0;

	while (var <= 10)
	{
		for (var2 = 0; var2 <= 14; var2++)
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
