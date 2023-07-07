#include <stdio.h>

/**
*main - Entry point
*@argc: argc int counter
*@argv: argv char array char
*Return: always 0 (success)
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
