#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

#define BUFSIZE 1024

int copy_file(const char *from, const char *to);
int open_file(const char *filename, int flags, mode_t mode);
void close_file(int fd);
void handle_error(const char *message, const char *file);

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, otherwise an error code as specified in copy_file.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	if (copy_file(argv[1], argv[2]) == -1)
	exit(98);

	return (0);
}

/**
 * copy_file - Copies the content of one file to another.
 * @from: The source file name.
 * @to: The destination file name.
 *
 * Return: 0 on success, otherwise an error code:
 *         97 - Incorrect number of arguments
 *         98 - Cannot read from source file
 *         99 - Cannot write to destination file
 *        100 - Cannot close a file descriptor
 */
int copy_file(const char *from, const char *to)
{
	int fd_from, fd_to;
	char buffer[BUFSIZE];
	int bytes_read, bytes_written;

	fd_from = open_file(from, O_RDONLY, 0);
	fd_to = open_file(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((bytes_read = read(fd_from, buffer, BUFSIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close_file(fd_from);
			close_file(fd_to);
			handle_error("Can't write to", to);
			return (-1);
		}
	}

	if (bytes_read == -1)
	{
		close_file(fd_from);
		close_file(fd_to);
		handle_error("Can't read from", from);
		return (-1);
	}

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}

/**
 * open_file - Opens a file with specified flags and mode.
 * @filename: The name of the file to open.
 * @flags: Flags for opening the file.
 * @mode: Permissions mode for the file.
 *
 * Return: The file descriptor on success, or -1 on failure.
 */
int open_file(const char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
		handle_error("Can't open", filename);

	return (fd);
}

/**
 * close_file - Closes a file by file descriptor.
 * @fd: The file descriptor to close.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
		handle_error("Can't close fd", "");
}

/**
 * handle_error - Handles and reports errors.
 * @message: The error message to display.
 * @file: The file name associated with the error.
 */
void handle_error(const char *message, const char *file)
{
	dprintf(2, "Error: %s %s\n", message, file);
}

