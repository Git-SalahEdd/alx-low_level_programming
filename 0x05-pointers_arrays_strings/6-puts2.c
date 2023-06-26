#include "main.h"

/**
* puts2 - prints every other character of a string,
* starting with the first character, 
* followed by a new line
*@str: stringed to be edited
 */

void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	_putchar(str[0]);
	while (j < i)
	{
	_putchar(str[j]);
	j += 2;
	}
	_putchar('\n');
}
