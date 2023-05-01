#include "main.h"

/**
 * _sqrt_helper - A helper function that recursively calculates the square root
 * of a number.
 *
 * @n: The number to calculate the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of n, or -1 if n does not have a natural square
 * root.
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess > n)
		return (-1);

	if (guess * guess == n)
		return (guess);

	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number using
 * recursion.
 *
 * @n: The number to calculate the square root of.
 *
 * Return: The square root of n, or -1 if n does not have a natural square
 * root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 0));
}
