#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: prints the value of n status:
 *              is greater than 5 or is less than 6 and not 0 or is zero
 *
 *Return: 0 (success)
*/

int main(void)
{
	int n, mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mod = n % 10;
	if (n > 5);
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, mod);
	}
	if (n = = 0);
	{
		printf("Last digit of %i is %i and is 0\n", n, mod);
	}
	if (n != = 0 && n < 6);
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, mod);
	}
	return (0);
}
