#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer
 *
 * Return: data
*/

size_t print_listint(const listint_t *h)
{
	size_t data = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		data++;
	}
	return (data);
}
