#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int number1;
	int number2;
	int result;

	if (argc != 3)/* (nom du programme + 2 nombres) ne jamais oublier nom du programme ! */
	{
		printf("Error\n");
		return (1);
	}

	number1 = atoi(argv[1]);/* atoi convertit les arguments (chaînes de caractères) en entiers */
	number2 = atoi(argv[2]);
	result = number1 + number2;

	printf("%d\n", result);

	return (0);
}
