#include<stdio.h>
/**
 * main	- Entry point
 * Return: 0
 */
int main(void)
{
	unsigned long first = 1, second = 2, sum = 0, next;

	while (first <= 4000000)
	{
		if (first % 2 == 0)
		{
			sum += first;
		}
		next = first + second;
		first = second;
		second = next;
	}
	printf("%lu\n", sum);
	return (0);
}
