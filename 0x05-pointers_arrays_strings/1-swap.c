#include "main.h"
/**
 * swap_int - swap
 *
 * @a: int
 *
 * @b: int
 *
 * Return: 0
*/
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
