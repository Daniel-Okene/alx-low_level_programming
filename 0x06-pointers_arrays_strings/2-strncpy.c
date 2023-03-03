#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	if (src[i] && i < n)
		for (i; i < n; i++)
			dest[i] = '\0';

	return (dest);
}
