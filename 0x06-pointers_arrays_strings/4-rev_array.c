#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to reverse
 * @n: number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n;
	int copy;

	while (i < n / 2)
	{
		copy = a[i];
		a[i++] = a[j--];
	}
}
