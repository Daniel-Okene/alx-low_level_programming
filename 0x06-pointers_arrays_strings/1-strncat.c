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
	int i = 0;
	int count = 0;

	while (dest[count])
		count++;

	while (src[i] && i < n)
	{
		dest[count] = src[i];
		count++;
		i++;
	}

	dest[count] = '\0';
	return (dest);
}
