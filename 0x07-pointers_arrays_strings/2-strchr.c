#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: stirng literal given
 * @c: character to search for
 *
 * Return: pointer to s(whre c first occurred)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
