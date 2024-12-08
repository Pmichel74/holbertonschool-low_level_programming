#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a add node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the end element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *add, *end;

	add = malloc(sizeof(list_t));/*allocation memoire pour nouveau noeud*/
	if (add == NULL)
		return (NULL);

	dup = strdup(str);/*fonction pour duplication chaine str*/
	if (str == NULL)
	{
		free(add);
		return (NULL);
	}

	for (len = 0; str[len];)/*Calcul longueur de chaine*/
		len++;
	/*add = noeud*/
	add->str = dup;/*assigne chaine dupliquée au nouveau noeud*/
	add->len = len;/*stock longueur de chaine dans le len du noeud*/
	add->next = NULL;/*initialise le pointeur 'next' nouveau noeud à NULL*/

	if (*head == NULL)
		*head = add;

	else
	{
		end = *head;/*initialise un pointeur end avec adresse du 1er noeud de la liste*/
		while (end->next != NULL)/*boucle pour atteindre dernier noeud*/
			end = end->next;/*avance au noeud suivant à chaque iteration*/
		end->next = add;/*fait pointer next du dernier noeud vers nouveau noeud add*/
	}

	return (*head);
}
