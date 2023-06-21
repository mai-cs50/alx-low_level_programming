#include "main.h"
/**
 * main - Entry point
 *
 * Description: sum
 *
 * Return: always 0 (success)
 *
*/
int main(void)
{
	int n, sum;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
