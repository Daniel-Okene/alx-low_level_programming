#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end -  adds a new node at the end of a list.
 * @head: pointer to the list
 * @str: data of the new node
 *
 * Return: back the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *new_node;

	ptr = *head;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	while (ptr->next)
		ptr = ptr->next;

	ptr->next = new_node;
	ptr = new_node;
	return (ptr);
}
