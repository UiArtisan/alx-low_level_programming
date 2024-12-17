#include "main.h"

/**
 * get_endianness - Determines the endianness of the system.
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned long int nbr = 1;

	return (*(char *)&nbr);
}
