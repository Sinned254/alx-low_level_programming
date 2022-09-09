#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
 * main- entry to the program
 *
 * Description: Asses a random number,display if last digit is
 * less than 6 or greater than 5 or is zero.
 *
 * Return: zere if successful
 */
int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld <  6 && ld != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	if (ld > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	if (ld == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	return (0);
}

