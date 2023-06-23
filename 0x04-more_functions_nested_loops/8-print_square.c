#include "main.h"
/**
 * print_square - print #
 *
 * @size: is area
 *
 * Return: always 0
*/
void print_square(int size)
{
	int row, col;

	for (size = 0)
		_puchar('\n')
	else

		for  (row = 1; row <= size ; row++)
		{
			for (col = 1; col <= size ; col++)
				_putchar('#');
			_putchar('\n');
		}

}
