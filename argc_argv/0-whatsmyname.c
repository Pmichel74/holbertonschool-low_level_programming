#include <stdio.h>
#include "main.h"

/**
* main - prints the name of the program
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc __attribute__((unused)), char *argv[]) //__attribute__((unused)) pour ne pas utiliser le argc
{
	printf("%s\n", argv[0]);

	return (0);
}
