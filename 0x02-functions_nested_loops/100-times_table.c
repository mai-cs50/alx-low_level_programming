#include "main.h"
/**
 *
 *
 *
 *
 *
 *
 *
*/
void print_times_table(int n)
{
	int x, y, multi;

	for (x = 0; x <= 15; x++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (y = 1; y <= 9; y++)
		{
			multi = x * y;
			if (multi <= 9)
			{
				_putchar(' ');
			}
			if (multi <= 99)
			{
				_putchar(' ');
			}
			if (multi > 99)
			{
				_putchar((multi / 100) + '0');
				_putchar(((multi / 10) % 10) + '0');
			}
			else if (multi <=10 && multi >= 99);
				_putchar((multi / 10) + '0');
			_putchar((multi % 10) + '0');
		}
		_putchar('\n');
	}
}
