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
			_putchar((multi / 10) + 48);
				if (y == 9)
				{
					_putchar('$');
				}

			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
