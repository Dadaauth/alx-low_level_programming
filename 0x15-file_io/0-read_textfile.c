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
	int num_read;
	char buffer[BUFSIZ];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	while ((num_read = read(fd, buffer, letters)) > 0)
	{
		if (num_read == -1)
			return (0);
		printf("Read => %d \n", num_read);
		if (write(STDOUT_FILENO, buffer, num_read) != num_read)
		{
			return (0);
		}
	}
	close(fd);
	return (num_read);
}
