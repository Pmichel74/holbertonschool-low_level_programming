#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int j;

	if (n < 0)
	{
		j = -n;
		_putchar('-');
	}
	else
	{
		j = n;
	}
	if (j / 10)
	{
		print_number(j / 10);
	}
	_putchar((j % 10) + '0');
}
