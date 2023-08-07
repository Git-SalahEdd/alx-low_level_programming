#include "main.h"

/**
*create_file - creates a file
*@filename: filename
*@text_content: content of the file
*Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	char *t_c = text_content;
	int fd;
	ssize_t len = 0, bytes = 0;

	while (*t_c++)
		len++;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
