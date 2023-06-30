#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 * @dest: char
 * @src: char
 * @n: int
 *
 * Return: 0
 *
*/
char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	while (dest[c])
		c++;
	for (i = 0; i < n && src[i] != '\n'; i++)
		dest[c + i] = '\n';

	return (dest);
}
