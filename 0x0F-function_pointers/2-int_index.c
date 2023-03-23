#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: index of the first element for which the
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	while (i < siz)
	{
		if (cmp(array[i]))
			break;
		i++;
	}

	if (i == size - 1)
		return (-1);
	return (i);
}
