#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @nbr: the number to extract from it the last digit
 * Return: value of the last digit
 */
int print_last_digit(int nbr)
{
	int last_digit;

	last_digit = nbr % 10;
	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
