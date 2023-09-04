#include "main.h"
/**
 * print_diagonal - print line
 *
 * @n: number of /
 *
*/
void print_diagonal(int n)
{
	int l = 0, s;

	while (l < n && n > 0)
	{
		s = 0;
		while (s < l)
		{
			_putchar(' ');
			s++;
		}
		_putchar('\\');
		_putchar('\n');
		l++;
	}
	if (l == 0)
		_putchar('\n');
}
