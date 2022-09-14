#include "main.h"
/**
 * times_table - compute 9 times table
 *
 * return: void
 */
void times_table(void)
{
	int i, j, m, k, n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			m = j * i;
			k = m / 10;
			n = m % 10;
			if (j == 0)
				_putchar('0');
			else if (m < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(n + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(k + '0');
				_putchar(n + '0');
			}
		}
		_putchar('\n');
	}
}
