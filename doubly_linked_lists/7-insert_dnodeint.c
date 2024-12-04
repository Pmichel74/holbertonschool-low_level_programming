#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                            list at a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *add;


	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)/*juste avant l'index où inserer nouveau noeud*/
	tmp = tmp->next;
	idx--;

	if (!tmp->next)
	return (add_dnodeint_end(h, n));

	add = malloc(sizeof(dlistint_t));
	if (!add)
	return (NULL);

	add->n = n;
	add->prev = tmp;
	add->next = tmp->next;
	tmp->next->prev = add;
	tmp->next = add;

	return (add);
}
