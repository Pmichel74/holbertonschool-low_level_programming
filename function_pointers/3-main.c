#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	int (*ptr)(int, int);

	int num1, num2, result;
	char c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
ptr = get_op_func(argv[2]);

	if (ptr == NULL)
	{
	printf("Error\n");
	exit(99);
	}
	c = *argv[2];

	if ((c == '/' || c == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}


result = ptr(num1, num2);
printf("%d\n", result);

return (0);
}