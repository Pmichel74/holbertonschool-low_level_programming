#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 * atoi - converts a string to an integer
 * 
 * Return: 0 (Success), or 1 (Success)
 * 
 */
int main(int argc, char *argv[])
{

	int i;
	int j;
	int k;
	int num;
	int sum = 0;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '9' || argv[i][j] < '0')
			printf("error");
			return (1);
		}
	}

	for (k = 1; argc; k++)
	{
		num = atoi(argv[k]);
		if (num >= 0)
		{
			sum = sum + num;
		}
	}
	printf("%d\n", sum);
	return (0);
}