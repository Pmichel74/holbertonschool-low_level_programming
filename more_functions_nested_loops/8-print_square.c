#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
	int line;
	int row;

	for (line = 0; line < size; line++)
	{
		for (row = 0; row < size; line++)
		{
			_putchar('#');
		}
		_putchar('\n')
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
