#include "main.h"
/**
 * _strlen - length of char
 *
 * @s: char
 *
 * Return: 0
 *
*/
int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
		c++;
	return (c);
}
