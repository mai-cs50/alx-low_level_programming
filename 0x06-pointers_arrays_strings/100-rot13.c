#include "main.h"
/**
 * rot13 - encodes a string
 *
 * @s: char
 *
 * Return: ptr
 *
 *
 *
*/
char *rot13(char *s)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rot13[i])
			{
				*s = rot13[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}