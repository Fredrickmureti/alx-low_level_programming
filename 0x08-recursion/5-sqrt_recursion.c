#include "main.h"

/**
 * sqrt_helper - Helper function to calculate square root recursively.
 * @n: The number for which to calculate the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of 'n' or -1 if it doesn't have one.
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess); /* If guess^2 equals n, we found the square root */
	}
	else if (guess * guess > n)
	{
		return (-1); /* If guess^2 exceeds n, n doesn't have a natural square root */
	}
	else
	{
		return (sqrt_helper(n, guess + 1)); /* Increment guess and continue searching */
	}
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which to calculate the square root.
 *
 * Return: The natural square root of 'n' or -1 if it doesn't have one.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /* Return -1 for negative numbers */
	}
	else if (n == 0 || n == 1)
	{
		return (n); /* Base case: the square root of 0 and 1 is the number itself */
	}
	else
	{
		return (sqrt_helper(n, 1)); /* Start searching for the square root from 1 */
	}
}
