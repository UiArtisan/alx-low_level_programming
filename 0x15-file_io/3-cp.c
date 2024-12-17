#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define UNREAD "Error: Can't read from file %s\n"
#define UNCREATE "Error: Can't write to %s\n"
#define UNCLOSED "Error: Can't close fd %d\n"

/**
 * main - entry pointe
 * @ac: arguments count
 * @av: arguments vectors
 * Return: 1 (Success)
 */
int main(int ac, char **av)
{
	int from_f = 0, to_f = 0;
	ssize_t bytes;
	char buff[BUFF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_f = open(av[1], O_RDONLY);
	if (from_f == -1)
		dprintf(STDERR_FILENO, UNREAD, av[1]), exit(98);
	to_f = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_f == -1)
		dprintf(STDERR_FILENO, UNCREATE, av[2]), exit(99);
	while ((bytes = read(from_f, buff, BUFF_SIZE)) > 0)
		if (write(to_f, buff, bytes) != bytes)
			dprintf(STDERR_FILENO, UNCREATE, av[2]), exit(99);
	if (bytes == -1)
		dprintf(STDERR_FILENO, UNREAD, av[1]), exit(98);
	from_f = close(from_f);
	to_f = close(to_f);
	if (from_f)
		dprintf(STDERR_FILENO, UNCLOSED, from_f), exit(100);
	if (to_f)
		dprintf(STDERR_FILENO, UNCLOSED, to_f), exit(100);
	return (EXIT_SUCCESS);
}

