#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to flip
 *             to transform one number into another.
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_val = n ^ m;
	unsigned int len = 0;

	while (xor_val)
	{
		if (xor_val & 1ul)
			len++;
		xor_val = xor_val >> 1;
	}
	return (len);
}
