#include "main.h"

/**
 * print_binary -  prints the binary representation of a number
 * @n: number to convert to binary
 */
void print_binary(unsigned long int n)
{
	char binary;

	if (n == 0)
		_putchar('0');
	if (n > 0)
	{
		binary = ((n & 1) == 0 ? '0' : '1');
		if (n >> 1 != 0)
			print_binary(n >> 1);
		_putchar(binary);
	}
}
