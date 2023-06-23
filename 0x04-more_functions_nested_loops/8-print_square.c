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

	while (row < size && size > 0)
	{
		col = 0;
		while (col < size)
		{
			_putchar('#');
			col++;
		}
		_putchar('\n');
		row++;
	}
	if (row == 0)
		_putchar('\n');
}
