#include "main.h"

/**
 * read_textfile - Reads a text file and writes it to the standard output.
 * @filename: The name of the file to read.
 * @letters: The maximum number of letters to read and write.
 * Return: The actual number of letters read and written, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buff[BUFF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &buff[0], letters);
	bytes = write(STDOUT_FILENO, &buff[0], bytes);
	close(fd);
	return (bytes);
}
