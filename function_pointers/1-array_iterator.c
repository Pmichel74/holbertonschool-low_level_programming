#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Write a function that executes a function given as a parame
 * on each element of an array.
 * @array: array to iterate
 * @size: size of the array
 * @action: pointer to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL || action != NULL)
	return;

	while (i < size)
	{
	action(array[i]);
	i++;
	}
}
