#include <stdio.h>

/**
 * main - prints the size of various types
 *
 * Return: 0 always on success
 */

int man(void)
{
	printf("Size of a char: %d\n", sizeof(char));
       	printf("Size of an int: %d\n", sizeof(int));
	printf("Size of a long int: %ld\n", sizeof(long int));
	printf("Size of a long long int: %ld\n", sizeof(long long int));
	printf("Size of a float: %ld\n", sizeof(float));
	return (0);
}
