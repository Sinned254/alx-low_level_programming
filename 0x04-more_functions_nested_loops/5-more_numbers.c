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

	while (i <= 10)
	{
		for (j = 0; j <=14; j++)
			_putchar(j + '0');
		_putchar('\n');
		i++;
	}
}
