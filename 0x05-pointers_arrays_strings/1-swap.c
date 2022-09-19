#include "main.h"
/**
 * swap_int - sawap the value of two int
 * @a: pointer to int a
 * @b: pointer to int b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
