#include <stdio.h>
#include <stdlib.h>

/**
*main - entry point print opcodes
*@argc: arg count
*@argv: arg array
*Return: 0 always success
*/

int main (int argc, char **argv)
{
	int b, i;
	int (*add)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < b; i++)
	{
		opcode = *(unsigned char *)add;
		printf("%.2x", opcode);

		if (i == b - 1)
			continue;
		printf(" ");

		add++;
	}
	printf("\n");
	return (0);
}
