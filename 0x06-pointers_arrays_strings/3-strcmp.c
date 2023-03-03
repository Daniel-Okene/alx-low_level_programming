#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: returns an integer less than, equal to or greater than
 */

int _strcmp(char *s1, char *s2)
{
	int i, count = 0;

	for (i = 0; s1[i]; i++)
	{
		if (s1[i] == s2[i])
			count++;
	}

	if (count < i)
		return (-15);
	else if (count > i)
		return (15);
	return (0);
}
