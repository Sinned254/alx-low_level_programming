#include "main.h"
/**
 * print_array - print elements of an array
 * @a: array
 * @n: elements
 * return: void
 */
void print_array(int *a, int n)
{
	int i = 0;
	int j = 1;

	if (n > 0)
	{
		while (a[i] != '\0' && j < n)
		{
			printf("%d, ", a[i]);
			i++;
			j++;
		}
		printf("%d\n", a[i]);
	}
	else
	{
		n = 0;
	}
}

