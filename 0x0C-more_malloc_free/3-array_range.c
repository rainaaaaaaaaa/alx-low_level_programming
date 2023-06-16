#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: min values
 * @max: max values
 * Return: Empty
 */

int *array_range(int min, int max)

{
	int *a, n = 0;

	if (min > max)
	{
	return (NULL);
	}
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (a == NULL)
	{
	return (NULL);
	}
	while (min <= max)
	{
	a[n] = min;
	n++;
	min++;
	}
	return (a);
}
