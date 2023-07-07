#include "main.h"

/**
 * _puts - check the code
 *@str: string that will be edited
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
