#include "main.h"
#include <stdio.h>

/**
*_memset() - fills memory with a constant byte.
*@s: parameter the memory area pointed to by s
*@n: parameter the first n bytes
*@b: parameter constant byte to fill into memery
*Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
	s[i] = b;

return (s);
}
