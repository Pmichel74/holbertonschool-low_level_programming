#include "lists.h"
/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the list_t list.
 */
void free_list(list_t *head)
{
	list_t *tmpfile;
	tmpfile = head->next;

	while (head != NULL)
	{
		free (head->str);
		free (head);
		head = tmp;
	}
}
