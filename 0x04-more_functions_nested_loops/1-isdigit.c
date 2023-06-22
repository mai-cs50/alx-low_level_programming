#include "main.h"
/**
 * _isdigit - checks
 *
 * @c: input
 *
 * Return: 1 if is gigit 0 if not
 *
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
