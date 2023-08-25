#include "lists.h"
/**
 * list_len - linked length
 * @p: pointer
 *
 * Return: list size
*/
size_t list_len(const list_t *p)
{
	size_t i = 0;

	while (p)
	{
		p = p->next;
		i++;
	}
	return (i);
}
