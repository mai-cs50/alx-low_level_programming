#include <stdio.h>
/**
 *main - Entry point
 *
 *Description:
 *
 * Return: 0 (success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'e' || alpha == 'q')
			alpha++;
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
