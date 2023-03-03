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
	int i, j;
	int count;

	for (i = 0; s1[i]; i++)
	{
		for (j = 0; s2[j]; j++)
		{
			if (s1[i] == s2[j])
			{
				count++;
				break;
			}
		}
	}

	if (count < i)
		return (-1);
	else if (count > i)
		return (1);
	return (0);

