#include "main.h"

/**
 * is_prime_helper - A helper function that recursively checks if a number
 * is prime.
 *
 * @n: The number to check.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if n is prime, otherwise 0.
 */
int is_prime_helper(int n, int divisor)
{
	if (n == 2 || n == 3)
		return (1);

	if (n <= 1 || n % 2 == 0)
		return (0);

	if (divisor * divisor > n)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (is_prime_helper(n, divisor + 2));
}

/**
 * is_prime_number - Checks if a number is prime using recursion.
 *
 * @n: The number to check.
 *
 * Return: 1 if n is prime, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n == 2 || n == 3)
		return (1);

	if (n % 2 == 0)
		return (0);

	return (is_prime_helper(n, 3));
}
