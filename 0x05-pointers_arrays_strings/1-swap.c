#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: input to swap
 * @b: intpu to swap
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
