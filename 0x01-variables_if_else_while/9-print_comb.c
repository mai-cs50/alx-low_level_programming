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
	int y = 0;

	while (x < 10)
	{
		for (y = 0; y < 10; y++)
		{
			if
				(y == x);
				y++;

			putchar(x + '0');
			putchar(y + '0');
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');

	return (0);
}
