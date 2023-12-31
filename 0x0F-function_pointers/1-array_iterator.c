#include "function_pointers.h"

/**
*array_iterator - that executes a function given as a parameter
*on each element of an array
*@array: array
*@size: size of array
*@action: function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
	size_t i = 0;

	for (; i < size; i++)
	{
		action(array[i]);
	}
	}
}
