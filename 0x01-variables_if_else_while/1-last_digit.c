#include <stdlib.h>
#include <time.h>
#include <stdio.h>



/**
 * main prints if the last digit of n is greater than 5: the string and is greater than 5
 * if the last digit of n is 0: the string and is 0
 * if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
 * Return: Always (back)
 */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (last digit of n > 5)
	{
	printf("%d and is greater than 5\n", n);
	}
	if else (last digit of n == 0)
	{
	printf("%d and is 0\n", n);
	}
	while (last digit of 0 < n < 6)
	{
	printf("%d and is less than 6 and not 0\n", n);
	}
	return (0);
