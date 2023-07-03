#include "main.h"
/**
 * _strchr - locates a character in a string
 *
 * @s: char
 * @c: char
 *
 * Return: 0
 *
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\n'; i++)
	{
		if (s[i] == s)
		{
			return (s + i);
		}
	}
	return ('\0');
}
