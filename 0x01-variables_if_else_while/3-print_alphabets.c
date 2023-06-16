#include <stdio.h>
/**
*main - Entry point
*Return: always 0 (success)
*/

int main(void)
{
	char i = 'a';
	char i2 = 'A';

	while (i != 'z' + 1)
	{
		putchar(i);
		i++;
	}
	while (i2 != 'A' + 1)
	{
		putchar(i2);
		i2++;
	}
	putchar('\n');
	return (0);
}
