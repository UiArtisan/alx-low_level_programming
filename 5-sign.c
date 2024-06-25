#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @nbr: the number to check
 * Return:
 * 1 and prints '+' if nbr is greater than zero
 * 0 and prints '0' if nbr is zero
 * -1 and prints '-' if nbr is less than zero
 */
int print_sign(int nbr)
{
	if (nbr > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (nbr < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
	}
	return (0);
}
