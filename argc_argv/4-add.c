#include <stdio.h>
#include <stdlib.h>

/**
* main - adds two positive numbers
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 (Success), or 1 (Error)
*/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);




}
