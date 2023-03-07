#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: pointer to elements of an array
 * @size: size of array
 *
 * Return:: void
 */
void print_diagsums(int *a, int size)
{
	int i; d1 = 0;
	int d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[i][i];
		d2 += a[i][size - i];
	}
	printf("%d, %d", d1, d2);
}
