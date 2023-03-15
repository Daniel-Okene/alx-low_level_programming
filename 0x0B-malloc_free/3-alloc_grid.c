#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2D array of integers.
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to array of integer
 */
int **alloc_grid(int width, int height)
{
	int i, j, **newptr;

	if (width  <= 0 || height <= 0)
		return (NULL);

	newptr = calloc(sizeof(int) * (width * height));
	if (newptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		newptr[i] = calloc(sizeof(int) * width);
		if (newptr[i] == NULL)
		{
			free(newptr[i]);
			for (j = 0; j <= i; j++)
				free(grid[j]);
			return (NULL);
		}
	}

	return (newptr);
}
