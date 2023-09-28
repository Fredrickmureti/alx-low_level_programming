#include "main.h"

/**
 * is_prime_helper - Helper function to check if a number is prime.
 * @n: The number to check for primality.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if 'n' is prime, 0 otherwise.
 */
int is_prime_helper(int n, int divisor)
{
	if (n <= 1)
	{
		return (0); /* 0 and 1 are not prime numbers */
	}
	if (divisor <= 1)
	{
		return (1); /* If we've checked all divisors and none divides 'n', it's prime */
	}
	if (n % divisor == 0)
	{
		return (0); /* If 'n' is divisible by 'divisor', it's not prime */
	}
	/* Recursively check the next divisor */
	return (is_prime_helper(n, divisor - 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check for primality.
 *
 * Return: 1 if 'n' is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, n - 1));
}
