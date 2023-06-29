#include "main.h"

/**
*char *_strcat - appends the src string to the dest string
*@dest:parameter string receive a string from src
*@src:parameter string to be added to first parameter dest
*Return:final string dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
