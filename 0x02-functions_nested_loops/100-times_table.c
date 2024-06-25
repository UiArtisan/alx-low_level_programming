#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					if (product < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(48 + product);
					}
					else if (product < 100)
					{
						_putchar(' ');
						_putchar(48 + (product / 10));
						_putchar(48 + (product % 10));
					}
					else
					{
						_putchar(48 + (product / 100));
						_putchar(48 + ((product / 10) % 10));
						_putchar(48 + ((product % 10) % 10));
					}
				}
				else
				{
					_putchar(48 + product);
				}
			}
			_putchar('\n');
		}
	}
}
