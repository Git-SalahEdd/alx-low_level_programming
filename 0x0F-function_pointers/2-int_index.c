#include "function_pointers.h"

/**
*int_index - that searches for an integer
*@array: array of int's
*@size: size of array
*@cmp: fn ptr
*Return: the index of the first element
*for which the cmp function does not return 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (!(array == NULL && size <= 0 && cmp == NULL))
		for (; x < size; x++)
		{
			if (cmp(array[x]))
				return (x);
		}
	return (-1);
}
