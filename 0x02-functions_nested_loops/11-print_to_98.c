#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints natural integers from number to 98
 *@n: number to start
 * return: void
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
		printf("%d", 98);
	else if (n <= 98)
	{
		for (i = n; i <= 97; i++)
		{
			printf("%d, ", i);
			if (i == 97)
				printf("%d", 98);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
			if (i == 99)
				printf("%d", 98);
		}
	}
}


