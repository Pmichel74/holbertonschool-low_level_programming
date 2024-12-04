#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlinsint_t *add;

	add = malloc(sizeof(dlistint_t));
	if (!add)
	return (NULL);

	add->n = n;
	add->prev = NULL;
	add->next = *head;

	if (*head)
	(*head)->prev = add;
	*head = add;

	return (add);

}