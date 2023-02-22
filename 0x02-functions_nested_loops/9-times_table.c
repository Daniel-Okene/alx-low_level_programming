#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int i = 0;
	int n;
	int start = 0;

	for (n = 0; n < 10; n++)
	{
		_putchar(start + '0');
		for (i = 1; i < 10; i++)
		{
			_putchar(',');
			_putchar(' ');
			if (n * i >= 10)
			{
				_putchar(((n * i) / 10) + '0');
				_putchar(((n * i) % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((n * i) + '0');
			}
		}
		_putchar('\n');
	}
}
				
