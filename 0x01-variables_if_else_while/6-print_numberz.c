#include <stdio.h>
/**
*main - Entry point
*Return: always 0 (success)
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
