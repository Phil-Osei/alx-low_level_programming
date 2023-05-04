#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: pointer to the head of list of type listint_t
 *
 * Return: the number of nodes in list
 **/

size_t listint_len(const listint_t *h)
{
		size_t num;

		for (num = 0; h != NULL; num++)
		{
			h = h->next;
		}

			return (num);
}

