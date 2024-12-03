/*
 * File: 3-add_node_end.c
 * Auth: Brennan D Baraban
 */

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

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(add);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	add->str = dup;
	add->len = len;
	add->next = NULL;

	if (*head == NULL)
		*head = add;

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = add;
	}

	return (*head);
}
