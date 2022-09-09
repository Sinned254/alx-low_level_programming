#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main- entry to the program
 *
 * Description: determine whether the randomly generated,
 * number is positive, 0, or negative.
 * Return: condition statement
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n > 0)
		printf("%d is positive\n", n);
	return (0);
}
