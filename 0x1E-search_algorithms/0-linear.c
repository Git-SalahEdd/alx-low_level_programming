#include "search_algos.h"

/**
* linear_search - function that searches for a value
* in an array of integers using the Linear search algorithm
* @array: pointer to the first element of the array to search in
* @size:  the number of elements in array
* @value: the value to search for
* Return: the first index where value is located
*/

int linear_search(int *array, size_t size, int value)
{
	int idx = -1;
	size_t i = 0;


	if (!array)
	{
		return (-1);
	}
	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			idx = i;
			break;
		}
	}

	return (idx);
}
