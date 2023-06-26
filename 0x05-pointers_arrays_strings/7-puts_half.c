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
	}
	else if (i % 2 != 0)
	{
	i2 = (i - 1) / 2;
	}
	while (i2 < i)
	{
	_putchar(str[i2]);
	}
	_putchar('\n');
}
