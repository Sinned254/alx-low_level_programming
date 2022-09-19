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
	int i, j, tl;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	tl = i;
	j = tl / 2;
	while (j <= tl)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
