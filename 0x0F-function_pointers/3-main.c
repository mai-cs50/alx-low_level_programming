#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "3-get_op_func.h"

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
    char op;
    int (*operation)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        return (1);
    }

    num1 = atoi(argv[1]);
    op = argv[2][0];
    num2 = atoi(argv[3]);

    if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%')
    {
        operation = get_op_func(argv[2]);
        if (operation != NULL)
        {
            printf("%d\n", operation(num1, num2));
            return (0);
        }
    }
    printf("Error\n");
    return (1);
}

