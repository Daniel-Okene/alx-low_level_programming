#include "main.h"

/**
 * _islower -  checks for lowercase character
 * @c: string to check
 *
 * Return: 0 on success
 */

int _islower(int c)
{
	int i = 97;

	while(i < 123)
	{
		if (c == i++)
			return (1);
	}
	return (0);
}
