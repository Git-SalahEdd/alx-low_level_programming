#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int var, w;

		for (var = 0; var < size; var++)
		{
			for (w = 0; w < size - var - 1; w++)
			{
			_putchar(' ');
			}
			for (w = 0; w <= var; w++)
			{
			_putchar('#');
			}
			_putchar('\n');
			
			}
		
	}
	else if (size <= 0)
	{
	_putchar('\n');
	}
}

