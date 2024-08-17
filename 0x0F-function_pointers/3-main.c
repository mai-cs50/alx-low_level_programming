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
    char *op;

    /* Check for correct number of arguments */
    if (argc != 4)
    {
        printf("Error\n");
        return (1);
    }

    /* Convert arguments to integers */
    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    op = argv[2];

    /* Get the function for the operator */
    operation = get_op_func(op);

    /* Check if the operator is valid and not null */
    if (operation == NULL || (strcmp(op, "/") == 0 && num2 == 0) || (strcmp(op, "%") == 0 && num2 == 0))
    {
        printf("Error\n");
        return (1);
    }


    /* Perform the operation and print the result */
    printf("%d\n", operation(num1, num2));
    return (0);
}

