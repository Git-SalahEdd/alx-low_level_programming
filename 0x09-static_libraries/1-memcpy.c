#include "main.h"

/**
**_memcpy - cpy memory area.
*@src: parameter from the memory area
*@n: parameter the first n bytes to cpy
*@dest: parameter to fill into memery
*Return: Returns a pointer to the memory area dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
