#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include "main.h"
/**
 * error_exit - error exit
 * @code: the code
 * @format: the format
 * @arg: args
 * Return: nothing
 */
void error_exit(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}
/**
 * error_exit2 - error exit function 2
 * @code: the exit code
 * @format: fprmat string
 * @arg: the arg
 * Return: void.
 */
void error_exit2(int code, const char *format, const int arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}
/**
 * main - the main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, ret_read, ret_write;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", NULL);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 438);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to %s\n", argv[2]);
	while ((ret_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		ret_write = write(fd_to, buffer, ret_read);
		if (ret_write != ret_read)
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	if (ret_read == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	if (close(fd_from) == -1)
		error_exit2(100, "Error: Can't close fd %d\n", fd_from);
	if (close(fd_to) == -1)
		error_exit2(100, "Error: Can't close fd %d\n", fd_to);

	return (0);
}
