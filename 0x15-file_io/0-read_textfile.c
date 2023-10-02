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
	ssize_t b;
	char buffer[READ_BUFFER_SIZE * 8];

	if (!filename || !letters)
		return (0);

	fd = popen(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	b = read(fd, &buffer[0], letters);
	b = write(STDOUT_FILENO, &buffer[0], b);
	close(fd);
	return (b);
}
