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

    if ((op == '+' || op == '-' || op == '*' || op == '/' || op == '%') &&
        (operation = get_op_func(argv[2])) != NULL)
    {
        if ((op == '/' && num2 == 0) || (op == '%' && num2 == 0))
        {
            printf("Error\n");
            return (1);
        }
        printf("%d\n", operation(num1, num2));
        return (0);
    }
    printf("Error\n");
    return (1);
}

