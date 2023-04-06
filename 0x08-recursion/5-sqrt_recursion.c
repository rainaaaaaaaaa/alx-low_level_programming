#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: If n does not have a natural square root
 * the function should return -1
 */

int _sqrt_recursion(int n)

{
	int sqrt_candidate;

	if (n < 0)
	{
	return (-1);
	}
	if (n == 0 || n == 1)
	{
	return (n);
	}

	sqrt_candidate = _sqrt_recursion(n / 2) + 1;

	if (n == sqrt_candidate * sqrt_candidate)
	{
	return (sqrt_candidate);
	}
	else
	{
	return (_sqrt_recursion(n - 1));
	}
}
