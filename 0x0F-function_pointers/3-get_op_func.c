#include "3-calc.h"

/**
 * get_op_func - function pointer that selects the correct function to perform
 * the operation asked by the user
 * @s: the operator given by the user
 *
 * Return: pointer to the function that corresponds to the
 * operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
    if (strcmp(s, "+") == 0)
        return (op_add);
    if (strcmp(s, "-") == 0)
        return (op_sub);
    if (strcmp(s, "*") == 0)
        return (op_mul);
    if (strcmp(s, "/") == 0)
        return (op_div);
    if (strcmp(s, "%") == 0)
        return (op_mod);
    return (NULL);
}
