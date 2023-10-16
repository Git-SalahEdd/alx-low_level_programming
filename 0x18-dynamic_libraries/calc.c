#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divv(int a, int b);
int mod(int a, int b);



/**
*add - returns the sum of a and b
*@a: parameter1
*@b: parameter2
*Return: final result
*/

int add(int a, int b)
{
	return (a + b);
}

/**
*sub - returns the difference of a and b
*@a: parameter1
*@b: parameter2
*Return: final result
*/

int sub(int a, int b)
{
	return (a - b);
}

/**
*mul - returns the product of a and b
*@a: parameter1
*@b: parameter2
*Return: final result
*/

int mul(int a, int b)
{
	return (a * b);
}

/**
*divv - returns the result of the division of a by b
*@a: parameter1
*@b: parameter2
*Return: final result
*/

int divv(int a, int b)
{
	if (b == 0)
	{
		printf("Cannot divide by zero");
		return (0);
	}
	return (a / b);
}

/**
*mod - returns the remainder of the division of a by b
*@a: parameter1
*@b: parameter2
*Return: final result
*/

int mod(int a, int b)
{
	return (a % b);
}
