#include "main.h"

/**
* _isalpha: - check a char if isalpha
* Return: always rst result to check if it's alpha
* @c: parameter (int) to check if alpha or not
*/

int _isalpha(int c)
{
	int rst = c;

	if (rst >= 65 && rst <= 122)
	{
		rst = 1;
	}
	else
	{
		rst = 0;
	}
	return (rst);
}
