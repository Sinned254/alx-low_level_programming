#include <stdio.h>
#include <main.h>
/**
 * main - finds and print the largest prime factor of the number
 *
 * return: 0 success
 */
int main(void)
{
	long int n = 612852475143;
	long int i = n;
	long int j = 2;

	while (i != 2)
	{
		if (i % j == 0)
			i = i / j;
		else
			j++;
	}
	print("li\n", i);

	return (0);
}


