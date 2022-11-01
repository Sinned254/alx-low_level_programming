#include "main.h"
/**
 * flip_bits - returns number of flip bits to change numbers
 * @n: num 1
 * @m: num 2
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int sum = 0;
	unsigned long int mask;

	mask = n ^ m;

	while (mask)
	{
		sum = sum + (mask & 1);
		mask = mask >> 1;
	}
	return (sum);
}
