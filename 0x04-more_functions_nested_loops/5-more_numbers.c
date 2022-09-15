#include "main.h"
/**
 * more_numbers - print 0-14 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			int c = j;

			if (c / 10)
			{
				_putchar(c / 10 + '0');
				c = c % 10;
			}
			_putchar(c + '0');
		}
		_putchar('\n');
		i++;
	}
}
