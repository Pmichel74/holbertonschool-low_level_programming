#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: the int to check
 * Return: 1 and prints + if n is greater than 0
 * 0  prints 0 if n is zero
 * -1 prints -1 if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
