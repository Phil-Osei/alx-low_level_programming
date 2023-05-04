#include "lists.h"

/**
 * pop_listint - function deletes the head node of a linked list
 * @head: pointer that points to the first node in the linked list
 *
 * Return: the data inside the nodes that was deleted,
 * or 0 if the list is empty
 **/

int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	next_node = (*head)->next;
	free(*head);
	*head = next_node;

	return (data);
}
