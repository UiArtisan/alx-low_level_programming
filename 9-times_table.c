#include "main.h"
/**
 * times_table - prints the 9 times table.
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (product < 10)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(48 + product);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(48 + (product / 10));
				_putchar(48 + (product % 10));
			}

		}
		_putchar('\n');
	}
}
