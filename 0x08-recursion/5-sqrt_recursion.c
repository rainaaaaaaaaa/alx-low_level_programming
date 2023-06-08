#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _sqrt_helper - A helper function that recursively calculates the square root
 * of a number.
 * @n: The number
 * @r: the square root of the number
 *
 * Return: The square root of n, or -1 if n does not have a natural square
 * root.
 */
int _sqrt_helper(int n, int r)
{
	if (r * r > n)
		return (-1);

	if (r * r == n)
		return (r);

	return (_sqrt_helper(n, r + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number
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
