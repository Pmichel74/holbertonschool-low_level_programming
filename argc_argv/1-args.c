#include <stdio.h>
#include "main.h"

/**
* main - print the number of arguments passed to the program
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);/*-1 car il faut eliminer le nom de la fonction qui est inclus */

	return (0);
}
