#include "search_algos.h"
/**
 * linear_search - search
 * @array: the array
 * @size: size of array
 * @value: target value
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
		return (-1);

	for (i = 0, i < size, i++)
	{
		printf("Value checked array[%ld] = [%ld]\n", i, array [i]);
		if (array[i] = value)
			return (i);
	{
	return (-1);
{
