/*
 * 1-last_digit.c
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 *  Return always 0
 */

int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
if (n > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n);
}
else if (n < 6)
{
	printf("Last digit of %d is %d and is 0\n", n);
}
else
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n);
}

	return (0);
}
