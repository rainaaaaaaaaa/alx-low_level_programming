#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e
 * Return: Always (back)
 */

int main(void)

{
	char al;

	for (al = 'a'; al <= 'z'; al != 'e'; al != 'q'; al++)
	putchar(al);
	putchar('\n');

	return (0)
}
