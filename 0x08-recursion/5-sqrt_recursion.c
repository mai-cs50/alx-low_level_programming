#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: int
 *
 * Return: 0
 *
*/
int squar(int n, int val);
int _square_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - find square
 *
 * @n: int
 * @val: int
 *
 * Return: 0
*/
int squar(int n, int val)
{
	if (val * val == 0)
		return (val);
	else if (val * val < n)
		return (aquare (n, val + 1));
	else
		return (-1);
}
