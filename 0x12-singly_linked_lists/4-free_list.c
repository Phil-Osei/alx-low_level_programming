#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 **/

void free_list(list_t *head)
{
	list_t *next;
	list_t *current = head;

	while (head)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
