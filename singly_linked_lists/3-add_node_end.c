#include "lists.h"

/**
* add_node_end - Adds a new node at the end
*                of a list_t list.
* @head: A pointer the head of the list_t list.
* @str: The string to be added to the list_t list.
*
* Return: If the function fails - NULL.
*         Otherwise - the address of the new element.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	unsigned int length = 0;
	list_t *add, *end;

	add = malloc(sizeof(list_t));
	if (add == NULL)
	return (NULL);

	dup = strdup(str);

	length = strlen(str);

	add->str = dup;
	add->len = length;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}

		end = *head;
		while (end->next != NULL)
		end = end->next;

		end->next = add;

	return (add);
}
