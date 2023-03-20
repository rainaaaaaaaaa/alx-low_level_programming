#include <stdlib.h>
#include <time.h>
#include <stdio.h>



/**
 * main -  prints if the last digit of n is greater than 5:
 * the string and is greater than 5,
 * if the last digit of n is 0: the string and is 0,
 * if the last digit of n is less than 6 and not 0:
 * the string and is less than 6 and not 0.
 * Return: Always (back)
 */

int main(void)

{
	int n, lastdgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdgt = n % 10;

	if (lastdgt > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastdgt);
	}
	else if (lastdgt == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lastdgt);
	}
	else if (lastdgt < 6 && lastdgt != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdgt);
	}
	return (0);
}
