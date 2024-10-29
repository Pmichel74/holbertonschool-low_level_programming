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

	for (i = 0; s[i] != '\0'; i++)
	{
		for (end = i -1; end >= 0; end--)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
	}
}
