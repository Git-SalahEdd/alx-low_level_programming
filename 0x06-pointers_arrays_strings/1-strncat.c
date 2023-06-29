#include "main.h"
#include <stdio.h>

/**
**_strncat - concatenates two strings
*@dest: parameter receive string from src
*@src: parameter string to send to dest
*@n: n bytes from src
*Return: dest final string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
