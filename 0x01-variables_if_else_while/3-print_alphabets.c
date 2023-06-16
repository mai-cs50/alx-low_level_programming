#include <sidio.h>
/**
 *main - Entry point
 *
 *Description:
 *
 *Return: 0 (success)
 *
 */

int main(void)
{
	char upper, lower;

	for (upper = 'a'; upper <= 'z'; upper++)
	{
		putchar(upper);
	}
	for (lower = 'A'; lower <= 'Z'; lower++)
	{
		putchar(lower);
	}
	printf("\n");
	return (0);
}
