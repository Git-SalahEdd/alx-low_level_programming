#include "main.h"

/**
*is_prime_number - returns 1 if the input integer is a prime number,
*otherwise return 0
*@n: parameter int
* Return: final result int
*/

int is_prime_number(int n)
{
	return (chk_prm(n, 2));
}

/**
*chk_prm - find prim number of n
*@n: int parameter
*@m: int parameter
*Return: int result
*/

int chk_prm(int n, int m)
{
	if (m >= n && n >= 2)
	{
	return (1);
	}
	else if (n % m == 0 || n <= 1)
	{
	return (0);
	}
	else
	return (chk_prm(n, m + 1));
}
