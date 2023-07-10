#include "main.h"

/**
**create_array - creates an array of chars,
*and initializes it with a specific char
*@size: size of array
*@c: character to fill in the array
*Return: a pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	char *p = malloc(size);

	if (size == 0 || p == 0)
		return (0);
	while (size--)
		p[size] = c;
	return (p);
}
