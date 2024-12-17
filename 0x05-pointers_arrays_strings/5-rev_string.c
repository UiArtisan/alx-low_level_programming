#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string to reverse it
 */
void rev_string(char *s)
{
	int len = 0, i;
	char temp;

	while (s[len])
		len++;
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
