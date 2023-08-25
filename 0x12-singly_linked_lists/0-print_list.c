#include "lists.h"
/**
 * _strlen - string length
 * @s: count
 *
 * Return: int string length
*/
int _strlen(char *c)
{
	int i = 0;

	if (!c)
		return (0);
	while (*c++)
		i++;
	return (i);
}
/**
 * rint_list - rint_list
 * @l: pointer
 *
 * Return: list
*/
size_t print_list(const list_t *l)
{
	size_t i = 0;

	while (l)
	{
		printf("[%d] %s\n", _strlen(l->str), l->str ? l->str : "(nill)");
		l = l->next;
		i++;
	}
	return (i);
}

