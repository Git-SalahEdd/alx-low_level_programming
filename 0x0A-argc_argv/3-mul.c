#include "main.h"

/**
*main - Entry point
**@argc: argc int arg counter
*@argv: argv char arg vector
*Return: always 0 (success)
*/

int main(int argc, char *argv[])
{
	int s, i, i2;

	i = atoi(argv[1]);
	i2 = atoi(argv[2]);

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		s = i * i2;
		printf("%d\n", s);
	}
	return (0);
}
