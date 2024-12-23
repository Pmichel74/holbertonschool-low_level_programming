/*
 * File: 0-malloc_checked.c
 * Auth: Brennan D Baraban
 */

#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *allo = malloc(b);

	if (allo == NULL)
	exit(98);

	return (allo);
}
