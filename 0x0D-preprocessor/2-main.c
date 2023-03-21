#include <stdio.h>

/**
 * main - prints teh mnaem of the file it was compilrd from
 * followed by a new line
 *
 * Return: 0 on success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
