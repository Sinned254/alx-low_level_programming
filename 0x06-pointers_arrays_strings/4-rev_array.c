#include "main.h"
/**
 * reverse_array - reverse the content of array
 *
 * @a: array
 * @n: number of elements of the array
 * return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int tm;

	for (i = 0; i < n / 2; i++)
	{
		tm = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tm;
	}
}

