#include "main.h"
#include <stdio.h>

/**
 * err_file - Handles file-related errors and exits the program.
 * @from: File descriptor of the source file.
 * @to: File descriptor of the destination file.
 * @argv: Argument vector.
 */
void err_file(int from, int to, char *argv[])
{
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * close_fd - Closes a file descriptor and handles any errors.
 * @fd: The file descriptor to be closed.
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies contents from one file to another.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success, various exit codes on errors.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	err_file(file_from, file_to, argv);

	do {
		bytes_read = read(file_from, buffer, sizeof(buffer));
		if (bytes_read == -1)
		{
			err_file(file_from, file_to, argv);
		}

		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			err_file(file_from, file_to, argv);
		}
	} while (bytes_read > 0);

	close_fd(file_from);
	close_fd(file_to);

	return (0);
}

