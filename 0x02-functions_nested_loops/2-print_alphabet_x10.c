#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
*/
void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; line++);
	{
		for (ch = 'a'; ch <= 'z'; ch++);
			-putchar(ch);
		-putchar('\n');
	}
}