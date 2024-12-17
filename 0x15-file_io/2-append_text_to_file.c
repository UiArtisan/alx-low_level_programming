#include "main.h"

/**
 * _strlen - Function to calculate the length of a string.
 * @s: The input string.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	if (!s)
		return (0);
	while (*s++)
		len++;
	return (len);
}

/**
 * append_text_to_file - Appends text to an existing file.
 * @filename: The name of the file to which text is appended.
 * @text_content: The text content to append to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
		int fd;
	ssize_t bytes = 0, ctn_len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (ctn_len)
		bytes = write(fd, text_content, ctn_len);
	close(fd);
	return (bytes == ctn_len ? 1 : -1);
}
