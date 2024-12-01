#include <stdlib.h>
#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Write a function that executes a function given as a parame
 * on each element of an array.
 * @array: array to iterate
 * @size: size of the array
 * @action: pointer to function with an integer as argument
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (!array || !action) /* if (array == NULL || action == NULL) */
	return;

	while (i < size)
	{
	action(array[i]);
	i++;
	}
}
