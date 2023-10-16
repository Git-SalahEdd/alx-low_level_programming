#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * printf - writes the character c to stdout
 * @format: The characters to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int printf(const char *format,...)
{
	write(1, "9 8 10 24 75 - 9\n", 17);
	write(1, "Congratulations, you win the Jackpot!\n", 38);
	exit(EXIT_SUCCESS);
}
