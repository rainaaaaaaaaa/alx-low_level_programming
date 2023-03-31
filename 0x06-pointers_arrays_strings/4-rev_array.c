#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)

{
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
	int tmp = a[i];

	a[i] = a[j];
	a[j] = tmp;
	i++;
	j--;
	}
}
