#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 * Return: Always (back)
 */

int main(void)

{
	int x, y, z;

	for (x = '0'; x < '9'; x++)
	{
	for (y = x + 1; y <= '9'; y++)
	{
	if (y != x)
	{
	for (z = y + 1; z <= '9'; z++)
	{
	if (z != y && z != x)
	{
	putchar(x);
	putchar(y);
	putchar(z);
	if (x == '7' && y == '8' && z == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	}
	putchar('\n');

	return (0);
}
