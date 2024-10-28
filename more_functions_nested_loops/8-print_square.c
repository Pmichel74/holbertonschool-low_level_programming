#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
	int line;
	int row;

	 if (size <= 0)
	 {
		 _putchar('\n');
	 }
	 else
	 {
		 for (line = 0; line < size; line++)
		 {
			 for (row = 0; row < size; row++)
			 {
				 _putchar('#');
			 }
			 _putchar('\n');
		 }
	 }
}
