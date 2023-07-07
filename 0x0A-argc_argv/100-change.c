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

		for (i = 0; i < 5; i++)
		{
			if (money >= c[i])
			{
				lc += money / c[i];
				money = money % c[i];
				if (money % c[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", lc);
		}
		else
		{
			printf("error\n");
			return (1);
		}
	}
	return (0);
}
