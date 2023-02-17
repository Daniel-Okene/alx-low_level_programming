#include <stdio.h>

/**
 * main - prints the size of various types
 *
 * Return: 0 always on success
 */

int man(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
       	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
