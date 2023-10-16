#include "main.h"

/**
* _isupper - checks for uppercase character
* @c: parameter (int) check uppercase
* Return: if the case is upper or lower
*/

int _isupper(int c)
{
	int up;

	if (c >= 65 && c <= 90)
	{
		up = 1;
	}
	else
	{
		up = 0;
	}
	return (up);
}
