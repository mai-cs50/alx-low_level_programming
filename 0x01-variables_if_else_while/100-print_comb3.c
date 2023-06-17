#include <stdio.h>
/**
 *main - Entry point
 *
 *Description:
 *
 *Return: 0 (success)
 *
*/

int main(void)
{
	int x = 0;
	int y;

	while (x < 9)
	{
		for (y = 0; y < 10; y++)
		{
				while (y <= x)
				y++;

			putchar(x + '0');
			putchar(y + '0');
				if (x + y != 17)
				{
					putchar(',');
					putchar(' ');
				}
		}
		x++;
	}
	putchar('\n');
	return (0);
}
