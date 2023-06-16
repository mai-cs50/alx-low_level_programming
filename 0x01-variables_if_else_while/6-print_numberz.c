#include <stdio.h>
/**
 *main - Entry point
 *
 *Description
 *
 * Return: 0 (success)
 *
*/

int main(void)
{
	int n = 0;

	while (n < 0)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
