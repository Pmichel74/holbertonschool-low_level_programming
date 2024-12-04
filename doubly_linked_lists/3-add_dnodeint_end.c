#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add;
	dlistint_t *last;

	add = malloc(sizeof(dlistint_t));/* allocation memoire nouveau noeud*/
	if (!add)
	return (NULL);

	add->n = n;/* initialise nouveau noeud*/
	add->next = NULL;

	if (!*head)/* check si 1er pointeur est null*/
	{
		add->prev = NULL; /* initialise le pointeur a null car est premier element*/
		*head = add;/* pointe head comme nouveau premier element*/
		return (add);
	}
	last = *head;/*initialise last avec adresse du 1er element de la liste*/
	while (last->next != NULL)
	last = last->next;/*chaque iteration, maj pointeur vers element suivant*/

	last->next = add;/*lie dernier noeud existant au nouveau*/
	add->prev = last;/*lie le nouveau noeud au dernier noeud existant*/

	return (add);
}
