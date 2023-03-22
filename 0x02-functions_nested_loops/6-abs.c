#include "main.h"

/**
 * _abs - Write a function that computes the absolute value of an integer
 * @c: integer
 * Return: Always (back)
 */

int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c + -1;
	return (abs_val);
	}
	return (0);
}
