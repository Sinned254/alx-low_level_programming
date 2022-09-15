#include <stdio.h>
/**
 * main- print fizz if divisble by 3, Buzz if divisible by 5
 * and FizzBuzz if divisible by both 3 & 5
 *
 * Return: 0 succes
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			if (i == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}

