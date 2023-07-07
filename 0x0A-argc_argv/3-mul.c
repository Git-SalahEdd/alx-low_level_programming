#include "main.h"

/**
*main - Entry point
**@argc: argc int arg counter
*@argv: argv char arg vector
*Return: always 0 (success)
*/

int main(int argc, char *argv[])
{
	int i;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 2)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	return (0);
}
