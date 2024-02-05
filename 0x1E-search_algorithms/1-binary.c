#include "search_algos.h"

/**
* binary_search - searches for a value in a sorted array of integers
* using the Binary search algorith
* @array: pointer to the first element of the array to search in
* @size:  the number of elements in array
* @value: the value to search for
* Return: the first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_helper(array, 0, size - 1, value));
}

/**
 * binary_helper - recursive function
 *
 * @array: pointer to the first element of the array
 * @min: min idx of the array
 * @max: max idx of the array
 * @value: value to search for
 *
 * Return: index if found and -1 if not
 */

int binary_helper(int *array, int min, int max, int value)
{
	int mid = (max + min) / 2;
	int i;

	if (min <= max)
	{
		printf("Searching in array: ");
		for (i = min; i <= max; i++)
		{
			printf("%d", array[i]);
			if (i < max)
				printf(", ");
			else
				printf("\n");
		}
		if (array[mid] > value)
			return (binary_helper(array, min, mid - 1, value));
		else if (array[mid] < value)
			return (binary_helper(array, mid + 1, max, value));
		return (mid);
	}
	return (-1);
}
