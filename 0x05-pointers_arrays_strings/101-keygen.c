#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
    int sum = 0;
    char ch;

    srand(time(NULL));
    while (sum <= 2645 - 127) {  // Ensure we don't exceed the required sum
        ch = rand() % 94 + 33;  // Generate a printable ASCII character (from '!' to '~')
        sum += ch;
        putchar(ch);
    }
    putchar(2772 - sum);  // Output the last character to complete the required sum
    return (0);
}
