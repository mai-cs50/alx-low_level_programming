#include "main.h"
/**
 * more_numbers - print 0 - 14
 *
 * Return: always (0)
 *
*/
void more_numbers(void)
{
	int x, y, num;

	for (x = 1; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			num = y;
			if (y > 9)
			{
				_putchar(1 + 48);
				num = y % 10;
			}
			if (y <= 9)
			{
				_putchar(num + 48);
			}
		}
		putchar('\n');
	}
}
