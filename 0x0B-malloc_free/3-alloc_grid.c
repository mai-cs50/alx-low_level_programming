#include "main.h"
/**
 * **alloc_grid - function that returns a pointer to a 2 dimensional array of integers
 *
 * @width: int
 * @height: int
 *
 * Return: 0
 *
*/
int **alloc_grid(int width, int height)
{
	int **tab, i, j;

	tab = malloc(sizeof(*tab) * height);

	if (width <= 0 || height <= 0 || tab == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0;)
	}

}
