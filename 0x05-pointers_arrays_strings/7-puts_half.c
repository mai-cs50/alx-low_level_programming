#include "main.h"
/**
 * puts_half - print
 *
 * @str: char
 *
 * Return: 0
 *
*/
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
