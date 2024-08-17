#include "3-calc.h"

/**
 * main - Entry point for a simple calculator program.
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
    int num1, num2;
    int (*operation)(int, int);

    /* Check for correct number of arguments */
    if (argc != 4)
    {
        printf("Error\n");
        return (1);
    }

    /* Convert arguments to integers */
    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    /* Get the function for the operator */
    operation = get_op_func(argv[2]);

    /* Check if the operator is valid and not null */
    if (operation == NULL)
    {
        printf("Error\n");
        return (1);
    }

    /* Check for division or modulo by zero */
    if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && num2 == 0)
    {
        printf("Error\n");
        return (1);
    }

    /* Perform the operation and print the result */
    printf("%d\n", operation(num1, num2));
    return (0);
}

