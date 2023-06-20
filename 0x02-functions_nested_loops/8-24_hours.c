#include "main.h"

/**
 * _islower - check for
 * Return: return 1 if c is , 0 otherwise
 * @ : parameter (int) to check if  or not
 */

void jack_bauer(void)
{
	int min,hrs;

	for (hrs = 0; hrs <= 23; hrs++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hrs / 10) +48);
			_putchar((hrs % 10) +48);
			_putchar(':');
			_putchar((min / 10) +48);
			_putchar((min % 10) +48);
			_putchar('\n');
		}
	}
}
