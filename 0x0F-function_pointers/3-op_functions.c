#include "3-calc.h"

/**
 * op_add - Adds two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The sum of the two numbers.
 */
int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - Subtracts the second number from the first number.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The difference between the two numbers.
 */
int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - Multiplies two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The product of the two numbers.
 */
int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - Divides the first number by the second number.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The quotient of the two numbers.
 */
int op_div(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a / b);
}

/**
 * op_mod - Calculates the remainder of the division of the first number by the second number.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division.
 */
int op_mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a % b);
}

