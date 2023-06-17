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
	int y = 1;

	for (x < 9; x++)
	{
		putchar(x);
		if (y < 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
