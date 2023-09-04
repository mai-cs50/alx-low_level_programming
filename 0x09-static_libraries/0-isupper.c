#include "main.h"
/**
 * _isupper - check
 *
 * @c: input
 *
 * Return: 1 if is upper 0 if is lower
 *
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
