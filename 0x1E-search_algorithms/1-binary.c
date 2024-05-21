#include "search_algos.h"
/**
 * linear_search - search
 * @array: the array
 * @size: size of array
 * @value: target value
 * Return: Always EXIT_SUCCESS
 */
void print_array(int *array, int l, int r)
{
	int i;

	for (i = l; i <= r; i++)
	{
		printf("%d", array [i]);
		if (i < r)
			printf(", ");
	}
	printf ("\n");
}
/**
 * linear_search - search
 * @array: the array
 * @size: size of array
 * @value: target value
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size - 1, m;

	if (!array || size == 0)
                return (-1);

        while (l <= r)
        {
                printf("Searching in array: ");
		print_array(array, l, r);
		m = l + (r - 1) / 2;

		if (array[m] < value)
			l = m + 1;
		else
			return (m);
        }
        return (-1);
}
