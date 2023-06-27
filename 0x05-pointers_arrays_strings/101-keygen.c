#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - generator for 101-crackme passwords
*Return: always 0 sucess
*/

int main (void)
{
	int s;
	char a;

	srand(time(NULL));
	while(s <= 2645)
	{
		a = rand() % 128;
		s += a;
		putchar (a);
	}
	putchar(2772 - s);
	return (0);
}
