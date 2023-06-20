#include "main.h"
/**
 * print_last_digit - last gigit of n
 *
 * @n: takes number
 *
 * Return: last digit
 *
*/
int print_last_digit(int n)
{
	int lastdigit;

	if (lastdigit < 0)
		lastdigit = -1 * (n % 10);
	else
		lastdigit = n % 10;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
