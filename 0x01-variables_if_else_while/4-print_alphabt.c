#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e
 * Return: Always (back)
 */

int main(void)

{
	char al, e, q;

	e = 'e';
	q = 'q';

	for (al = 'a'; al <= 'z'; al++)
	{
	if (al != e && al != q)
	putchar(al);
	}
	putchar('\n');
	return (0)
}
