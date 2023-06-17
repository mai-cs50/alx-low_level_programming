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
	int z = 0;

	while (x < 8)
	{
        	while (y < 9)
        	{
			while (y <= x)
			{
				y++;
			}
			while (z < 10 )
				while (z <= y)
			{
				{
					z++;
				}
			}

                        putchar(x + '0');
                        putchar(y + '0');
			putchar(z + '0');
			if (x + y != 24)
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		x++;
	}
	putchar('\n');

	return (0);
}
