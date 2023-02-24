#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (n > 0)
	{
		while (i < n)
		{
			while (j < n)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++
		}
	}
	else
		_putchar('\n');
}
