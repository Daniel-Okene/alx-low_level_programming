#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer pointing to newly allocated memory containing
 * contents of s1 followed by s2 and a null terminated
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, size1 = 0, size2 = 0;
	char *newptr;

	if (s1 == NULL)
		size1 = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			size1++;
	}
	if (s2 == NULL)
		size2 = 0;
	else
	{
		for (i = 0; s2[i]; i++)
			size2++;
	}

	newptr = malloc(sizeof(char) * (size1 + size2 + 1));
	if (newptr == NULL)
		return (NULL);
	for (i = 0; i < (size1 + size2); i++)
	{
		if (i <= size1)
			newptr[i] = s1[i];
		else
			newptr[i] = s2[i - size1];
	}
	newptr[i] = '\0';

	return (newptr);
}
