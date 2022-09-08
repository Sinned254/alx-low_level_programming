#include<stdio.h>
/**
 * main- entry to the program
 *
 * Description: use sizeof to determine types. 
 * Return: zero always, print size of types
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d bytes(s)\n", sizeof(int));
	printf("Size of a long int: %d bytes\n(s)", sizeof(long int));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %d bytes(s)", sizeof(float));
	return (0);
}
