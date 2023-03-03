#include "main.h"

/**
 * _strncat -  concatenates two strings
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes to concatenate
 *
 * Return:  pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, count = 0;

	while (dest[count])
		count++;

	for (i = 0; i < n; i++)
	{
		dest[count] = src[i];
		count++;
	}

	dest[count] = '\0';
	return (dest);
}
