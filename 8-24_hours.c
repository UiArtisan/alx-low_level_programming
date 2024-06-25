#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting 00:00 to 23:59
 */
void jack_bauer(void)
{
	int h, min;

	for (h = 0; h < 24; h++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(48 + (h / 10));
			_putchar(48 + (h % 10));
			_putchar(':');
			_putchar(48 + (min / 10));
			_putchar(48 + (min % 10));
			_putchar('\n');
		}
	}
}
