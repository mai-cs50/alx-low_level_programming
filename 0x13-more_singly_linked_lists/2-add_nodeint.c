#include "lists.h"
/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list.
 * @head: pointer
 * @n: new node value
 *
 * Return: new node pointer
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!head || !new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head)
	{
		new->next = *head;
	}
	*head = new;
	return (new);
}
