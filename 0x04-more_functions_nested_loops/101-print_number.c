#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int num;
	unsigned int divisor;

	/* Handle negative numbers */
	if (n < 0)
	{
		_putchar('-');
		num = -n;  /* Convert n to positive */
	}
	else
	{
		num = n;  /* Use num directly if n is non-negative */
	}

	/* Handle special case for zero */
	if (num == 0)
	{
		_putchar('0');
		return;
	}

	/* Calculate the divisor to get the most significant digit */
	divisor = 1;
	while (num / divisor >= 10)
	{
		divisor *= 10;
	}

	/* Extract and print each digit */
	while (divisor > 0)
	{
		_putchar((num / divisor) + '0');  /* Convert digit to character */
		num %= divisor;                   /* Remove the printed digit */
		divisor /= 10;                    /* Move to the next digit */
	}
}
