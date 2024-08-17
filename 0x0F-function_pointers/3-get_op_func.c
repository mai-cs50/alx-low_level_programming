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
	
	if (*s == '+')
		return (op_add);
	if (*s == '-')
		return (op_sub);
	if (*s == '*')
		return (op_mul);
	if (*s == '/')
		return (op_div);
	if (*s == '%')
		return (op_mod);
	return (NULL);

}
