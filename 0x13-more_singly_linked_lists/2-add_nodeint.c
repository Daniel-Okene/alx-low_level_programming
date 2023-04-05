#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: double pointer to the first node
 * @n: data for the new node
 *
 * Return: pointer to the first node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	int i;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	ptr->next = *head;
	*head = ptr;
	ptr = NULL;

	return (*head);
}
