#include "main.h"

/**
**_strcpy - copies the string from src to dest
*@src: input string
*@dest: output string
*Return: the final output string
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
