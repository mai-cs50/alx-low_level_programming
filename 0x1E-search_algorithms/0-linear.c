#include "serch_algos.h"
/**function that searches for a value in an array of integers
using the Linear search algorithm
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
