#include "main.h"

/**
 * print_to_98 - print int from 0 to 98
 * @nbr: parameter to be tested
 * Return: Always 0.
 */

void print_to_98(int nbr)
{
	int nr = nbr;

	if (nr <= 98)
	{
		for (; nr <= 98; nr++)
		{
			printf("%d", nr);
			if (nr != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (; nr >= 98; nr--)
		{
			printf("%d", nr);
		if (nr != 98)
			printf(", ");
		}
	}
	printf("\n");
}
