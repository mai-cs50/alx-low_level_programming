#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - prints the largest prime factor of a number
 *
 * Return: void
 */
void largest_prime_factor(void)
{
    long number = 612852475143;
    long max_prime = -1;
    long i;

    // Divide number by 2 until it is no longer divisible
    while (number % 2 == 0)
    {
        max_prime = 2;
        number /= 2;
    }

    // Check for odd factors from 3 onwards
    for (i = 3; i <= sqrt(number); i += 2)
    {
        while (number % i == 0)
        {
            max_prime = i;
            number /= i;
        }
    }

    // If the number is a prime number greater than 2
    if (number > 2)
    {
        max_prime = number;
    }

    printf("%ld\n", max_prime);
}

int main(void)
{
    largest_prime_factor();
    return (0);
}

