#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc: int
 * @argv: char
 *
 * Return: 0
 *
*/
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, lc = 0, money = atoi(argv[1]);
		int c[] = {25, 10, 5, 2, 1};

		if (money < 0)
		{
			printf("0\n");
			return (0);
		}

		for (i = 0; i < 5; i++)
		{
			lc += money / c[i];
			money %= c[i];
		}
		printf("%d\n", lc);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
