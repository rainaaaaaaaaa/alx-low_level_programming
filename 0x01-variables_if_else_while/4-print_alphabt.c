#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e
 * Return: Always (back)
 */

int main(void)

{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph != 'e'; alph != 'q';
	alph++)
	putchar(alph);
	putchar('\n');
	return (0)
}
