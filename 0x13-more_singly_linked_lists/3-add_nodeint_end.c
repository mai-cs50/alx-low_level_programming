#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer
 * @n: new_end value
 *
 * Return: new_end pointer
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !new_end)
		return (NULL);

	new_end->n = n;
	new_end->next = NULL;

	if (!*head)
	{
		*head = new_end;
	}
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new_end;
	}
	return (new_end);
}
