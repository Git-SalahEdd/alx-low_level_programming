#include "main.h"

/**
*get_bit - get bit
*@n: the decimal number
*@index: index
*Return: The value of the bibt at index index or -1 if error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{

	if (index >= (sizeof(n) * 8))
		return (-1);

	return (n >> index & 1);
}
