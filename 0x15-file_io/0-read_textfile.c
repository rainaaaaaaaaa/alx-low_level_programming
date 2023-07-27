#include "main.h"

/**
 * read_textfile - Reads a text file and prints it
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 *         0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t total_read = 0;
	ssize_t num_read;
	ssize_t num_written;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening the file");
		return (0);
	}
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		perror("Memory allocation failed");
		close(fd);
		return (0);
	}

	while (letters > 0)
	{
		num_read = read(fd, buffer, letters);
		if (num_read == -1)
		{
			perror("Error reading from the file");
			free(buffer);
			close(fd);
			return (total_read);
		}
		if (num_read == 0)
			break;
		num_written = write(STDOUT_FILENO, buffer, num_read);
		if (num_written == -1 || num_written != num_read)
		{
			perror("Error writing to STDOUT");
			close(fd);
			return (total_read);
		}
		total_read += num_read;
		letters -= num_read;
	}
	free(buffer);
	close(fd);
	return (total_read);
}
