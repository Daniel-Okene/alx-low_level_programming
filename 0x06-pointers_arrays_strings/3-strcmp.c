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
	int i = 0;
	int value;

	while (s1[1] && s2[1])
	{
		if (s1[i] > s2[i])
		{
			value = 15;
			break;
		}
		else if (s1[i] < s2[i])
		{
			value = -15;
			break;
		}
		else
			value = 0;
		i++;
	}
	return (value);
}
