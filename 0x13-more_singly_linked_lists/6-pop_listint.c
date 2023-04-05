#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: double pointer to the first node
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int copy;

	if (!*head)
		return (0);

	copy = (*head)->n;
	free(*head);

	return (copy);
}
