#include "main.h"
/**
 * print_diagonal - print diagonal spaces ending with slah
 *
 * @n: number to determine the spaces moved
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j = 0;

	if (n > 0)
	{
		while (j < n)
		{
			for (i = 0; i < n; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			j++;
		}
	}
	else
	{
		_putchar('\n');
	}
}

