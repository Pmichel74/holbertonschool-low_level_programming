#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the list_t list.
 */
void free_list(list_t *head)
{
	list_t *tmp;


	while (head != NULL)
	{
/*Avant de libérer le nœud courant,
le pointeur vers le nœud suivant est sauvegardé dans tmp.*/
		tmp = head->next;
/*La chaîne str du nœud courant est libérée
pour éviter les fuites de mémoire.*/
		free(head->str);
		free(head);/*noeud lui meme*/
		head = tmp;/*mis a jour pour pointer vers noeud suivant*/
	}
}
