#include "lists.h"
#include <stdio.h>

/**
* list_len - The number of elements in a linked list_t list
* @h: The list_t list.
*
* Return: The number of nodes.
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++
		h = h->next;
	}
	return (count);
}
