#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
*main - Entry point
*Return: always 0 (success)
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	printf("Last digit of %d", n);
	printf("is");
	if(lastdigit > 5 )
	{
	printf("and is greater than 5\n");
	}
	if(lastdigit == 0 )
        {
        printf("and is 0\n");
        }
	if(lastdigit < 6 && lastdigit != 0 )
        {
        printf("and is less than 6 and not 0\n");
        }
	return (0);
}
