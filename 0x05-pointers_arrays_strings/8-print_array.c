#include "main.h"

/**
*print_array(int *a, int n) - check the code for
*@a: parameter
*@n: parameter
*/

void print_array(int *a, int n)
{
	int i = 0;

	while(i < n)
	{
		printf("%d", a[i]);
                if(i < n - 1)
                {
                printf(", ");
                }
		i++;
	}
	printf("\n");
}
