#include "main.h"

/**
 * _isalpha -  checks for alphabetic character
 * @c: character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 */

int _isalpha(int c)
{
	int i = 97;
	int n = 65;

	while (i < 123)
	{
		if (i++ == c)
			return (1);
	}
	while (n < 103)
	{
		if (n++ == c)
			return (1);
	}
	return (0);
}

