#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i, j;
	int first = 1;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1 ; j <= 9; j++)
		{
			if (!first)
			{
			putchar(',');
			putchar(' ');
			}

			putchar(i + '0');
			putchar(j + '0');
			first = 0;
		}
	}
	putchar('\n');
	return (0);
}
