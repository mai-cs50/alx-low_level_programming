#include "main.h"
/**
 * print_square - print #
 *
 * @size: is area
 *
*/
void print_square(int size)
{
	int row, col;

	for  (row = 1; row <= size / 2; row++)
	{
		for (col = 1; col <= size / 2; col++)
			_putchar(35);
		_putchar('\n');
	}

}
