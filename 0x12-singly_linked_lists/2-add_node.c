#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: linked list to add
 * @str: data to add
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = sizeof(str) - 1;
	new_node->next = *head;
	*head = new_node;
	new_node = NULL;

	free(new_node);
	return (*head);
}
