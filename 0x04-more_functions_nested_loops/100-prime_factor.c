#include <stdio.h>
/**
 * main- finds and print the largest prime factor of the number
 *
 * Return: void
 */
int main(void)
{
	long int n = 612852475143;
	long int i = n;
	long int j = 2;

	while (i != j)
	{
		if (i % j == 0)
			i = i / j;
		else
			j++;
	}
	printf("%li\n", i);

	return (0);
}


