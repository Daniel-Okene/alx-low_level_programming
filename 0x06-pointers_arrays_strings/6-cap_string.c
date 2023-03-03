#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to work on
 *
 * Return: pointer to str
 */

char *cap_string(char *s)
{
	int i = 0;
	int k = 0;
	char spe[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (s[i])
	{
		while (spe[k])
		{
			if (s[i++] == spe[k++])
			{
				if (s[i] > 96 && s[i] < 123)
				{
					s[i] -= 32;
					break;
				}
			}
		}
	}
	return (s);
}
