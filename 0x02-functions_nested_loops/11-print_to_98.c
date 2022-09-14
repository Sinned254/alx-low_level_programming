#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints natural integers from number to 98
 *@n: number to start
 * return: void
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
			if (i == 98)
				printf("%d", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
			if (i == 98)
				printf("%d", i);
		}
	}
}

