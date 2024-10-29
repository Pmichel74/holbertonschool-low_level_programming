#include "main.h"
/**
 *
 *
 */
void print_rev(char *s)
{
	int i;
	int start;
	int end;
	end = i;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (start = i -1; start >= 0; start--)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
	}
}
