#include <unistd.h>
/**
 * _putchar - writes the character to the stdout
 * @c: the character to print it
 * Return: 1 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
