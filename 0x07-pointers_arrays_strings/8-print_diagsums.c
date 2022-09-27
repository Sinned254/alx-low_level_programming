#include "main.h"
/**
 * print_daidsums - print the sum of the two diagonals of a matrix of ints
 * @a: pointer to the array
 * @size: array size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	long int suml = 0;
	long int sumr = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				suml = suml + *(a + size * i + j);
			}
			if (i + j == size - 1)
			{
				sumr = sumr + *(a + size * i + j);
			}
		}
	}
	printf("%ld, %ld\n", suml, sumr);
}
