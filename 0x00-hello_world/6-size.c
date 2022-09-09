#include <stdio.h>

/**
 * main- entry to the program
 *
	 * Description: use sizeof to determine types 
 * Return: zero always, print size of types
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu bytes(s)\n", sizeof(int));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %lu bytes(s)\n", sizeof(float));

	return (0);
}
