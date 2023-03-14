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
	char *rbuffer = malloc(size * sizeof(char)));
	unsigned int i;

	for (i = 0; i < size; i++)
		rbuffer[i] = c;
	return (rbuffer);
}
