#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array
 * @array: a pointer to the array
 * @size: the size of the array
 * @action: a pointer to the function to execute on each element of the array
 *
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t i;

	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
	return (0);
}
