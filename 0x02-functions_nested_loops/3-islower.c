#include "main.h"

/**
*_islower - check for lowcase
*Return: return 1 if c lowcase or 0 otherwise
*/

int _islower(int c)
{
	int rst = c;

	if (rst >= 97 && rst <= 122)
	{
		rst = 1;
	}
	if (rst >= 65 && rst <= 90)
	{
		rst = 0;
	}
	return (rst);
}
