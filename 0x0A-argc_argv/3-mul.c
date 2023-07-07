#include "main.h"

/**
*main - Entry point
**@argc: argc int arg counter
*@argv: argv char arg vector
*Return: always 0 (success)
*/

int main(int argc, char *argv[])
{
	if (argc < 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3)
	{
		int i = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", i);
	}
	return (0);
}
