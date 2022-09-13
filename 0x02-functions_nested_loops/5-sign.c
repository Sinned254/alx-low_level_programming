#include "main.h"
/**
 * print_sign - prints + for positive num, - for negative
 * number and 0 if 0
 *
 * @n: is number to be examined
 *
 * Return: 1 if positve 0 if zero if negative -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
