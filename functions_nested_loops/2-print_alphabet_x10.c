# include "main"
/**
 * main - prints x10 times the alphabet, in lowercase, followed by a new line.
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char c;
	init i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
		_putchar (c);
		c++;
		}
		_putchar(\n);
		c++;
		}
}