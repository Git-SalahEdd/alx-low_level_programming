#include "main.h"

/**
*puts_half - puts half string
*@str: string will be edited
*/

void puts_half(const char *str)
{
	int i = 0, i2;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
	i2 = i / 2;
	while (str[i2] != '\0')
	{
		_putchar(str[i2]);
		i2++;
	}
	}
	else
	{
	int n = (i - 1) / 2;

	while (str[n] != '\0')
	{
	_putchar(str[n]);
	n++;
	}
	}
	_putchar('\n');
}
