#include "main.h"

/**
*puts_half - puts half string
*@str: string will be edited
*/

void puts_half(char *str)
{
	int i = 0, i2;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
	i2 = i / 2;
	while (i2 < i)
	{
		_putchar(str[i2]);
		i2++;
	}
	}
	else if (i % 2 != 0)
	{
	{
	int n = (i - 1) / 2;

	while (n < i)
	{
	n++;
	_putchar(str[n]);
	}
	}
	}
	_putchar('\n');
}
