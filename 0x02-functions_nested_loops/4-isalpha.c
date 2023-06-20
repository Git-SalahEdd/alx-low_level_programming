#include "main.h"


int _isalpha(int c)
{
	int rst = c;

	if(rst >= 65 && rst <= 122)
	{
		rst = 1;
	}
	else
	{
		rst = 0;
	}
	return rst;
}
