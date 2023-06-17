#include <stdio.h>
/**
*main - Entry point
*Return: always 0 (success)
*/

int main(void)
{
	int i, j, x;
	
	for (i = 0; i < 10; i++) 
	{
		for (j = i + 1; j < 10; j++)
		{
			for (x = j + 1; x < 10; x++)
			{
			putchar('0' + i);
			putchar('0' + j);
			putchar('0' + x);
			if (i == 7 && j == 8 && x == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
}
