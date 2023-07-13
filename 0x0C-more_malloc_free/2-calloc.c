#include "main.h"
/**
 * *memset - allocates memory for an array, using malloc
 *
 * @nmemb: int
 * @size: int
 *
 * Return: 0
 *
*/
char *memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
/**
 * *_calloc - allocates memory for an array, using malloc
 *
 * @nmemb: int
 * @size: int
 *
 * Return: 0
 *
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);
	if (m == 0)
		return (NULL);
	_memset(m, 0, sizeof(int) * nmemb);
	return (m);
}
