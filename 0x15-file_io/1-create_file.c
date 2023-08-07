#include "main.h"

/**
*create_file - creates a file
*@filename: filename
*@text_content: content of the file
*Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int i = 0, fd;
	ssize_t bytes = 0;

	if (!filename)
		return (-1);

	while (*text_content++)
		i++;
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (i)
		bytes = write(fd, text_content, i);
	close(fd);
	return (bytes == i ? 1 : -1);
}
