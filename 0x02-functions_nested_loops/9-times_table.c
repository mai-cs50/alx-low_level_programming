#include "main.h"
/**
 * times_table - prints the 9 times table
 *
*/
void times_table(void)
{
	int x, y, multi;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			multi = x * y;
			if (multi <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((multi / 10) + '0');
			}
			_putchar((multi % 10) + '0');
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
