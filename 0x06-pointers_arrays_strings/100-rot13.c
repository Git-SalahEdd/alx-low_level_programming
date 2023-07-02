#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *rot13(char *s)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*s)
	{
		while (i <= 52)
		{
		if (*s == rot13[i])
		{
		*s = ROT13[i];
		break;
		}
		i++;
		}
	}
	return (s);
}
