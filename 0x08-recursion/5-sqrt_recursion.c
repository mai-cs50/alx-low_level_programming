#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: int
 * @val: int
 *
 * Return: 0
 *
*/
int square(int n, int val);
int _sqrt_recursion(int n)
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
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
