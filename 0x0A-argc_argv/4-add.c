#include "main.h"

/**
*main - Entry point
**@argc: argc int arg counter
*@argv: argv char arg vector
*Return: always 0 (success)
*/

int main(int argc, char *argv[])
{
	int s = 0;
	char *a;

	while (--argc)
	{
		for (a = argv[argc]; *a; a++)
			if (*a < '0' || *a > '9')
				return (printf("Error\n"), 1);
		s += atoi(argv[argc]);
	}
	printf("%d\n", s);
	return (0);
}
