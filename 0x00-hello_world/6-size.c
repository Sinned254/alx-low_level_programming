#include <stdio.h>

/**
 * main- entry to the program
 *
 * Description: use sizeof to determine types
 * Return: zero always print size of types
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
