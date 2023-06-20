#include "main.h"
/**
 * print_sign - print + if greater than 0
 *
 * @n:
 *
 * Return: 1 if +, -1 if -, 0 if 0
 *
*/
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar(48)
		return (0);
	}
}
