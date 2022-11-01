#include "main.h"
/**
 * clear_bit - sets the valu of a bit to 0 at a given index
 * @n: pointer to integer
 * @index: index
 * Return: 1 success, -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask = 1 << index;
	mask = ~mask;
	*n = *n & mask;
	return (1);
}
