#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @list: input list
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step, prev_index, curr_index;
    listint_t *prev, *curr;

    if (list == NULL || size == 0)
        return (NULL);

    /* Calculate the jump step size */
    step = (size_t)sqrt((double)size);

    /* Initialize pointers */
    prev = list;
    curr = list;
    curr_index = 0;

    /* Jump through the list */
    while (curr->next && curr_index < size && curr->n < value)
    {
        prev = curr;
        curr_index = curr->index;  // Assumes list nodes have an 'index' field
        
        /* Move curr forward by step size */
        for (size_t i = 0; i < step && curr->next; i++)
        {
            curr = curr->next;
            curr_index = curr->index;
        }

        printf("Value checked at index [%lu] = [%d]\n", curr_index, curr->n);

        if (curr_index >= size || curr->n >= value)
            break;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, curr->index);

    /* Linear search within the block */
    for (; prev && prev->index <= curr->index; prev = prev->next)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return (prev);
    }

    return (NULL);
}
