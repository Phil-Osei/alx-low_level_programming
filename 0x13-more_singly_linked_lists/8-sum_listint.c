#include "lists.h"

/**
 * sum_listint - computes the sum of all the data(n) in a listint_t list
 * @head: first node in the linked list
 *
 * Return: sum of all the data(n) of the linked list
 **/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
