#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h:The head of hte dlistint_t list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
