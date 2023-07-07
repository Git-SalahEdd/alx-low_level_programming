#include "main.h"

/**
* _isdigit - checks for a digit
* @c: parameter (int) the value will be tested
* Return: the value is a digit return 1 or not return  0
*/

int _isdigit(int c)
{
	int dg;

	if (c >= 48 && c <= 57)
	{
		dg = 1;
	}
	else
	{
		dg = 0;
	}
	return (dg);
}
