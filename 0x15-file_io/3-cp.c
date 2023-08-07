#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

/**
 * display_error - Displays the appropriate error message
 * @code: The error code
 * @file: The name of the file causing the error
 */
void display_error(int code, char *file)
{
	switch (code)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		break;
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		break;
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		break;
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		break;
	}
}

/**
 * close_file - Closes the file descriptor
 * @fd: The file descriptor
 * @file: The name of the file being processed
 * Return: 0 on success, 100 on failure
 */
int close_file(int fd, char *file)
{
	if (close(fd) == -1)
	{
		display_error(100, file);
		return (100);
	}
	return (0);
}

/**
 * copy_file - Copies the content from one file to another
 * @fd_from: The file descriptor of the source file
 * @fd_to: The file descriptor of the destination file
 * @file_from: The name of the source file
 * @file_to: The name of the destination file
 * Return: 0 on success, the appropriate error code on failure
 */
int copy_file(int fd_from, int fd_to, char *file_from, char *file_to)
{
	ssize_t ret;
	char buffer[BUF_SIZE];

	while ((ret = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		if (write(fd_to, buffer, ret) != ret)
		{
			display_error(99, file_to);
			close_file(fd_from, file_from);
			close_file(fd_to, file_to);
			return (99);
		}
	}

	if (ret == -1)
	{
		display_error(98, file_from);
		close_file(fd_from, file_from);
		close_file(fd_to, file_to);
		return (98);
	}

	return (0);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: 0 on success, the appropriate error code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		display_error(97, NULL);
		return (97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		display_error(98, argv[1]);
		return (98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
	{
		display_error(99, argv[2]);
		close_file(fd_from, argv[1]);
		return (99);
	}

	if (copy_file(fd_from, fd_to, argv[1], argv[2]) != 0)
		return (99);

	if (close_file(fd_from, argv[1]) != 0)
		return (100);

	if (close_file(fd_to, argv[2]) != 0)
		return (100);

	return (0);
}

