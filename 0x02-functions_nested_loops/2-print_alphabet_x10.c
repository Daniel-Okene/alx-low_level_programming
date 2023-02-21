#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * followed by a new line
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int count = 10;
	int i;

	while(count > 0)
	{
		for(i = 97; i < 123; i++)
			_putchar(i);
		_putchar('\n');
		count--;
	}
}
