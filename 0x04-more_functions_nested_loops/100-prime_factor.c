#include <stdio.h>
#include <math.h>

/**
 * main - the largest prime factor of the number 612852475143
 * Return: 0 always sucess
 */

int main(void)
{
	long x, mv;
	long nbr = 612852475143;
	double sqr = sqrt(nbr);

	x = 1;

	while (x <= sqr)
	{
	if (nbr % x == 0)
	{
	mv = nbr / x;
	}
	x++;
	}
	printf("%ld\n", mv;
	return (0);
}
