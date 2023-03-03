#inlcude "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destionation pointer
 * @src: source pointer
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int count = 0;

	while (dest[i])
		i++;
	while (src[count])
	{
		dest[i] = src[count];
		i++;
		count++;
	}

	dest[i] = '\0';
	return (deest);
}

