#include <stdio.h>
/**
*main - Entry point
*Return: always 0 (success)
*/

int main(void)
{
	int i = 0;
	char i2 = 'a';

	while (i < 9)
	{
		putchar(i);
		i++;
	}
	while (i2 != 'f' + 1)
	{
		putchar(i2);
		i2++;
	}
	putchar('\n');
	return (0);
}
