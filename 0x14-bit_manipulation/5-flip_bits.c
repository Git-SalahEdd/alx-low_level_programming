#include "main.h"

/**
*flip_bits - number of bits you would need to flip
*to get from one number to another.
*@m: parameter nbr1
*@n: parameter nbr2
*Return: result
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, c = 0;

	while (xor)
	{
		if (xor & 1ul)
			c++;
		xor = xor >> 1;
	}
	return (c);
}

