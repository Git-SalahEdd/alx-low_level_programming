#include "main.h"

/**
*read_textfile - reads a text file and prints
*it to the POSIX standard output
*@filename: file name
*@letters: letters to read
*Return: returns the actual number of letters it
*could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t byts;
	char buffer[READ_BUFFER_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	byts = read(fd, &buffer[0], letters);
	byts = write(STDOUT_FILENO, &buffer[0], byts);
	close(fd);
	return (byts);
}
