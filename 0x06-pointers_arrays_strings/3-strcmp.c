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
	int count1 = 0;
	int count2 = 0;

	while (s1[count1])
		count1++;
	while (s2[count2])
		count2++;

	if (count1 < count2)
		return (-15);
	else if (count1 > count2)
		return (15);
	return (0);
}
