#include "main.h"

/**
 * is_prime_helper - A helper function that recursively checks if a number
 * is prime.
 * @n: The number
 * @d: The divisor
 *
 * Return: 1 if n is prime, otherwise 0.
 */
int is_prime_helper(int n, int d)
{
	if (n == 2 || n == 3)
		return (1);

	if (n <= 1 || n % 2 == 0)
		return (0);

	if (d * d > n)
		return (1);

	if (n % d == 0)
		return (0);

	return (is_prime_helper(n, d + 2));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number
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
