#include "main.h"

/**
 * create_file -creats a file name or truncate an existing one and write text
 * @filename: name of the file to creat
 * @text_content:  is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;
	ssize_t written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0600);
	if (fd == -1)
		return (-1);

	len = 0;
	while (text_content[len])
		len++;

	written = write(fd, text_content, len);

	close(fd);

	if (written != len)
		return (-1);

	return (1);
}
