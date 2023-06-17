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
		for (y = 0; y < 9; y++)
		{
				while (y <= x)
				y++;

			putchar(x + '0');
			putchar(y + '0');
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar(y + '0');
	putchar('\n');
	return (0);
}
