#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int row;
	int column;

	if (size <= 0)
	{
		_putchar("\n");
	}
	else
	{
		for (row = 1; row < size; row++)
		{
			for (column = 1; column  < size; column++)
			{
				_putchar(' ');
				for (column = 1; column = size; column ++)
					_putchar('#');
			}
		}
		_putchar("\n");
	}
}
