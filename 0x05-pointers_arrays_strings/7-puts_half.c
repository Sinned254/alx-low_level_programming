#include "main.h"
/**
 * puts_half - prints half ot string
 *
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, n, tl;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	tl = i;
	if (tl % 2 == 0)
	{
		n = tl / 2;
		while (n < tl)
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = (tl - 1) / 2;
		while (n < tl)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
