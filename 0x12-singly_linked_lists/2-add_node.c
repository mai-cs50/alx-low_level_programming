#include "lists.h"
/**
 * add_node - add_node
 * @head: pointer
 * @str: char
 *
 * Return: list size
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *zero_head = malloc(sizeof(list_t));

	if (!head || !zero_head)
		return (NULL);
	if (str)
	{
		zero_head->str = strdup(str);
		if (!zero_head->str)
		{
			free(zero_head);
			return (NULL);
		}
		zero_head->len = strlen(zero_head->str);
	}
	zero_head->next = *head;
	*head = zero_head;
	return (zero_head);
}
