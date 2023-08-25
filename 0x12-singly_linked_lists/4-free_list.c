#include "lists.h"
/**
 * free_list - free_list
 * @head: pointer
 *
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *node, *zero_node;

	if (!head)
		return;
	node = head;
	while (node)
	{
		zero_node = node->next;
		free(node->str);
		free(node);
		node = zero_node;
	}
}
