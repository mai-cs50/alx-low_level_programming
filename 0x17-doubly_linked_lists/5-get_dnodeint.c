#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head node
 * @index: index of node to return
 *
 * Return: adress of node at index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == indx)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
