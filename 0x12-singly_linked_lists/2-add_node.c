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
	list_t * 0_head = malloc(sizeof(list_t));

	if (!head || !0_head)
		return (NULL);
	if (str)
	{
		0_head->str = strdup(str);
		if (!0_head->str)
		{
			free(0_head);
			return (NULL);
		}
		0_head->len = _strlen(0_head->str);
	}
	0_head->next = *head;
	*head = 0_head;
	return (0_head);
}
