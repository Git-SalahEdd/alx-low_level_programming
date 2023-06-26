#include "main.h"

/**
*main - Entry point
*Return: always 0 (success)
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = '\0';
	return (dest);
}
