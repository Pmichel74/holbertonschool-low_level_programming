#include <stdio.h>
#include <stdlib.h>

/**
* main - adds two positive number
* @argc: number of arguments
* @argv: array of arguents
* atoi - converts a string to an integer
*
* Return: 0 (Success), or 1 (Error)
*
*/
int main(int argc, char *argv[])
{

	int i;

	int j;

	int num;

	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
			printf("Error\n");
			return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num > 0)
		{
			sum = sum + num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
