#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: false or true validation
 *
 *Return: 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if
		(n > 0);
	{
		printf("%i is positive\n");
	}
	if
		(n < 0);
	{
		printf("is negative\n");
	}
	else
	{
		printf("is zero\n");
	}
	return (0);
}