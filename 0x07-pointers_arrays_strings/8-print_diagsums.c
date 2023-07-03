#include "main.h"

/**
*print_diagsums - prints the sum of the two diagonals
*of a square matrix of integers
*@a:parameter pointer to input
*@size: parameter size input
*Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int sm1 = 0, sm2 = 0, x;

	for (x = 0; x < size; x++)
	{
		sm1 = sm1 + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		sm2 += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", sm1, sm2);
}
