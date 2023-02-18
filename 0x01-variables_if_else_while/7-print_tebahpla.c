#include <stdio.h>

/**
 * main - prints the lowercase alphabelts in reverse
 * followed by a new line
 *
 * Return: 0 on success
 */

int main(void)
{
	int i = 122;

	while (i > 96)
		putchar(i--);
	putchar('\n');
	return (0);
}

