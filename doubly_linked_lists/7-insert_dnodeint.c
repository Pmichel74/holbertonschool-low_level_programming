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


	if (idx == 0)/*index a 0*/
		return (add_dnodeint(h, n));/*fonction add_dnodeint pour ajouter en tête*/

	while (idx > 0)/*se déplacer dans la liste jusqu'à la position
	juste avant l'endroit où le nouveau nœud doit être inséré.*/
	{
	idx--;/*permet de compter combien de nœuds ont été parcourus*/
	tmp = tmp->next;/*avancer le pointeur tmp au nœud suivant dans la liste*/
	if (!tmp)
	return (NULL);
	}

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
