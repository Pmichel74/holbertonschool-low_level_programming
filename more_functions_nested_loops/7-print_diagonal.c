#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int row;
	int colomn;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < n; row++)
		{
			for (colomn = 0; colomn < n; colomn++)
			{
				if (colomn == row)
					_putchar('\\');
				else if (colomn < row)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
