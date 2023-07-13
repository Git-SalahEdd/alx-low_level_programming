#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 * Return: final result 0 on success or 1 on failure
 */

int *array_range(int min, int max)
{
	int *NA, i, size;

	size = max - min + 1;
	if (min > max)
	{
		return (NULL);
	}
	NA = malloc(sizeof(int) * size);
	if (NA == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		NA[i] = min++;
	}
	return (NA);
}
