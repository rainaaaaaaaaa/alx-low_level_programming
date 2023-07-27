#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 *         0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char buffer[1024];
	ssize_t total_read = 0;
	ssize_t num_read = read(fd, buffer, sizeof(buffer));
	ssize_t num_written = write(STDOUT_FILENO, buffer, num_read);

	if (filename == NULL)
		return (0);
	if (fd == -1)
	{
		perror("Error opening the file");
		return (0);
	}

	while (letters > 0)
	{
		if (num_read == -1)
		{
			perror("Error reading from the file");
			close(fd);
			return (0);
		}
		if (num_read == 0)
			break;
		if (num_written == -1 || num_written != num_read)
		{
			perror("Error writing to STDOUT");
			close(fd);
			return (0);
		}
		total_read += num_read;
		letters -= num_read;
	}
	close(fd);
	return (total_read);
}
