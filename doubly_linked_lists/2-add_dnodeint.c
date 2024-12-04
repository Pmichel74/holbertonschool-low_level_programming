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
	dlistint_t *add;

	add = malloc(sizeof(dlistint_t));/*allocation memoire new pointer*/
	if (!add)
	return (NULL);

	add->n = n;/* creation nouveau noeud*/
	add->prev = NULL;/* NULL car tete de liste*/
	add->next = *head;/*pointe vers l'ancien premier noeud*/

	if (*head)
	(*head)->prev = add;/*maj de l'ancien premier noeud*/
	*head = add;/* nouveau noeud devient tete de liste*/
				/*maintient la structure doublement chaînée de la liste */

	return (add);
}
