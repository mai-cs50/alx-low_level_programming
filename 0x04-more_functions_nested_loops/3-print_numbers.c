#include "main.h"
/**
 * print_numbers - print 0 to 9
 *
 * Return: always 0
 *
*/
void print_numbers(void)
{
	int num;

	while (num >= 0 && num <= 9)
		_putchar(num + 48);
		num++;
	_putchar("\n");
}
