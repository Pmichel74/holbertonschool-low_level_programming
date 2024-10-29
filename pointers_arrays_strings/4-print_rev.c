#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i;
	int j;
	int lenght;

	for (i = 0; s[i] != '\0'; i++)
	{

		lenght = i;

		for (j = lenght - 1; j >= 0; j--)
		{
			_putchar(s[j]);
		}
		_putchar('\n');
	}
}
