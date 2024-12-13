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

	add = malloc(sizeof(dlistint_t));/*allocation memoire pour nouveau noeud*/
	if (!add)
	return (NULL);

	add->n = n;/* assigne valeur n au nouveau noeud*/
	add->prev = NULL;/*assigne NULL à prev car nouveau noeud sera en tete*/
	add->next = *head;/*double_linked lists:
	doit pointer vers l'ancien noeud qui etait en tete */

	if (*head)
	(*head)->prev = add;/*maj de l'ancien premier noeud*/
	*head = add;/* nouveau noeud devient tete de liste*/
				/*maintient la structure doublement chaînée de la liste */

	return (add);
}
