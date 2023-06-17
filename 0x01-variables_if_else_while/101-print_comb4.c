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
	int z;

	while (x < 8)
	{
		y = 0;
        	while (y < 9)
        	{
			while (y <= x)
			{
				y++;
			}
			z = 0;
			while (z < 10 )
			{
				while (z <= y)
				{
					z++;
				}
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
					if (x + y + z != 24)
					{
						putchar(',');
						putchar(' ');
					}
				z++;
			}
		}
	}
		y++;
		x++;
	putchar('\n');

	return (0);
}
