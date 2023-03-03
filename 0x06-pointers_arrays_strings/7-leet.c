#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: pointer to string
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char letters[6] = {'a', 'e', 'o', 't', 'l'};
	char values[6] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		while (letters[j])
		{
			if (s[i] == letters[j] || s[i] == letters[j] - 32)
			{
				s[i++] = values[j];
				break;
			}
			j++;
		}
	}
	return (s);
}
