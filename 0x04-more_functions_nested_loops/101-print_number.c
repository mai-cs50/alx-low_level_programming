#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
    int divisor = 1;
    int digit;

    /* Handle negative numbers */
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    /* Find the divisor to extract the leftmost digit */
    while (n / divisor >= 10)
    {
        divisor *= 10;
    }

    /* Extract and print each digit */
    while (divisor > 0)
    {
        digit = n / divisor;
        _putchar(digit + '0');  /* Convert digit to character */
        n %= divisor;           /* Remove the printed digit */
        divisor /= 10;          /* Move to the next digit */
    }
}

