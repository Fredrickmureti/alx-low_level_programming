#include "main.h"

/**
 * _pow_recursion - Calculates the value of x raised to the power of y.
 * @x: The base.
 * @y: The exponent.
 *
 * Return: The result of x^y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
    if (y < 0)
    {
        return (-1); /* If y is negative, return -1 to indicate an error */
    }
    else if (y == 0)
    {
        return (1); /* Base case: x^0 is 1 */
    }
    else
    {
        /* Recursive case: x^y = x * x^(y-1) */
        return (x * _pow_recursion(x, y - 1));
    }
}
