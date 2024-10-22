#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: always 0.
 *
 */

int main(void)
	int num
{
	for (num = 0; num <= 9; num++)
	putchar(num + '0');
	putchar(',');
	putchar(' ');
	return (0);
}
