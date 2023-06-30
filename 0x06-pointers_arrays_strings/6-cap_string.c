#include "main.h"
#include <stdio.h>
/**
 * islower - determines ascii is lower
 *
 * @c: char
 *
 * Return: 1 or 0
 *
*/
int islower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - determines ascii is delimiter
 *
 * @c: char
 *
 * Return: 1 or 0
 *
*/

int isDelimiter(char c)
{
	int i;

	char delimiter[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 *
 * @s: char
 *
 * Return: string
 *
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelomiter(*s))
			foundDelimit = 1;
		else if (islower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
