#include "lists.h"
/**
 * add_node_end - add_node_end
 * @head: pointer
 * @str: char
 *
 * Return: list size
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *zero_node = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !zero_node)
		return (NULL);
	if (str)
	{
		zero_node->str = strdup(str);
		if (!zero_node->str)
		{
			free(zero_node);
			return (NULL);
		}
		zero_node->len = strlen(zero_node->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = zero_node;
	}
	else
		*head = zero_node;
	return (zero_node);
}
