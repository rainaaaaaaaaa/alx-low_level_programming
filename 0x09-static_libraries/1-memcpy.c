#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int p;

	for (p = 0; p < n; p++)
	dest[p] = src[p];
	return (dest);
}
