#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to stdout.
 * @filename: the filename
 * @letters: number of letter to read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_read, num_written;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters * sizeof(char));

	num_read = read(fd, buffer, letters);
	if (num_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	num_written = write(STDOUT_FILENO, buffer, num_read);
	if (num_written != num_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (num_read);

}
