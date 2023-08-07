#include "main.h"

#define USAGE_ERR "Usage: cp file_from file_to\n"
#define NO_RD "Error: Can't read from file %s\n"
#define NO_WR "Error: Can't write to %s\n"
#define NO_CL "Error: Can't close fd %d\n"
#define PERMISSION (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
*main - main entry
*@ac: argc
*@av: argv
*Return: 1 on sucess or 0 on failure
*/

int main(int ac, char **av)
{
	int from_fd = 0, to_fd = 0;
	ssize_t b;
	char buffer[READ_BUFFER_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE_ERR), exit(97);
	from_fd = open(av[1], O_RDONLY);
	if (from_fd == -1)
		dprintf(STDERR_FILENO, NO_RD, av[1]), exit(98);
	to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSION);
	if (to_fd == -1)
		dprintf(STDERR_FILENO, NO_WR, av[2]), exit(99);
	while ((b = read(from_fd, buffer, READ_BUFFER_SIZE)) > 0)
		if (write(to_fd, buffer, b) != b)
			dprintf(STDERR_FILENO, NO_WR, av[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, NO_RD, av[1]), exit(98);
	from_fd = close(from_fd), to_fd = close(to_fd);
	if (from_fd)
		dprintf(STDERR_FILENO, NO_CL, from_fd), exit(100);
	if (to_fd)
		dprintf(STDERR_FILENO, NO_CL, to_fd), exit(100);
	return (EXIT_SUCCESS);
}
