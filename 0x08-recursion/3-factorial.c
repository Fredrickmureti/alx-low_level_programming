#include "main.h"

/**
 * factorial - Calculates the factorial of a number.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of 'n' or -1 if 'n' is negative.
 */
int factorial(int n)
{
    if (n < 0)
    {
        return (-1); /* If n is negative, return -1 to indicate an error */
    }
    else if (n == 0 || n == 1)
    {
        return (1); /* Base case: factorial of 0 and 1 is 1 */
    }
    else
    {
        /* Recursive case: factorial(n) = n * factorial(n - 1) */
        return (n * factorial(n - 1));
    }
}
