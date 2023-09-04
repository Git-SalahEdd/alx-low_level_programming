#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: pointer to text to be added
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, byt, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	byt = write(fd, text_content, len);

	if (fd == -1 || byt == -1)
		return (-1);

	close(fd);
	return (1);

}

