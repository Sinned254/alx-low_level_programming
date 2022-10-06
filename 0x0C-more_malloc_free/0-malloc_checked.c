#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size to be alloced memory
 *
 * Return: pointer to alloctaed memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
