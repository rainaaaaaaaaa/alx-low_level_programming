/* bit_manipulation_functions_5.c */
#include "main.h"

/**
 * clear_bit - Clear the value of a bit to 0 at a given index.
 * @n: Pointer to the number whose bit will be cleared.
 * @index: The index of the bit to set to 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;
	*n &= ~mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return (1);
}
