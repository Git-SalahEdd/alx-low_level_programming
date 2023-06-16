#include <stdio.h>
/**
*main - Entry point
*Return: always 0 (success)
*/
int main(void)
{
	char i = 'a';
	while (i != 'z' + 1)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
