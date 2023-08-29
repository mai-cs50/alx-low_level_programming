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
	listint_t new_end = malloc(sizeof(listint_t));

	new_end->n;
	new_end->next;

	while (new_end->next != NULL){
		head = new_end->next;
	}
	new_end = head;
}
