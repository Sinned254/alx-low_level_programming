#include "main.h"
/**
 * jack_bauer - prints each minute of a day
 *
 * return: void
 */
void jack_bauer(void)
{
	int i, j, k, m;

	for (i = '0'; i <= '2'; i++)
	{
		for (j = '0'; j <= '3'; j++)
		{
			for (k = '0'; k <= '5'; k++)
			{
				for (m = '0'; m <= '9'; m++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(m);
					_putchar('\n');
				}
			}
		}
	}
}
