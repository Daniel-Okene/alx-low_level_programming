#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, *arrofint;

	if (min > max)
		return (NULL);

	arrofint = malloc(sizeof(int) * (max - min));
	if (!arrofint)
		return (NULL);

	for (i = 0; min <= max; i++)
		arrofint[i] = min++;

	return (arrofint);
}
