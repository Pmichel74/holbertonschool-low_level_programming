#include "main.h"

int aux_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)


{
	if (n < 0)
	{
		return (-1);
	}

	else
	{
		return (aux_sqrt_recursion(n, 0));
	}
}

/**
 * aux_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
	int aux_sqrt_recursion(int n, int i)
	{
		if (i * i > n)
		return (-1);
		if (i * i == n)
		return (i);
		return (aux_sqrt_recursion(n, i + 1));
	}
