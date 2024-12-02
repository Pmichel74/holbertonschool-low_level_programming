#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len = 0;
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
	return (NULL);

	dup = strdup(str);/* strdup pour dupliquer */
	if (dup == NULL)
	{
		free(add);
		return (NULL);
	}
	len = strlen(str); /*strlen donne longueur direct(evite boucle)*/

	add->str = dup;
	add->len = len;
	add->next = *head;

	*head = add;

	return (add);
}
