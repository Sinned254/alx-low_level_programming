#include "main.h"
/**
 * set_bit - sets value of bit to 1
 * @n: pointer to integer
 * @index: index
 * Return: 1 success, -1 errro
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask = 1 << index;
	*n = *n | mask;
	return (1);
}
