#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: The binary string to be converted.
 * Return: The converted unsigned int, or 0 if @b is NULL or contains
 *         non-binary characters.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int nbr = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != 48 && *b != 49)
			return (0);
		nbr = nbr * 2 + (*b++ - 48);
	}
	return (nbr);
}
