#include<stdio.h>

/**
 * main - prog divby 3 fizz or div 5 buzz or both fizzbuzz
 * Return: 0 always sucess
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		
	i++;
	}
	printf("\n");
	return (0);
}
