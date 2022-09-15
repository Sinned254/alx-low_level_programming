#include "main.h"
/**
 * print_triangle - prints triangle using # cahracter folowed by new line
 * @size: determines the size of a triangle
 * Return: void
 */
void print_triangle(int size)
{
	int j = 0;
	int i, s;

	if (size > 0)
	{
		while (j < size)
		{
			for (s = size - 1; s > j; s--)
			{
				_putchar(' ');
			}
			for (i = 0; i < j + 1; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
			j++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
