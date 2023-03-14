#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: size of buffer
 * @c: character to initialise
 *
 * Return: pointer to array of character
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *rbuffer = malloc(size * sizeof(char));

	if (rbuffer == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		rbuffer[i] = c;
	return (rbuffer);
}
