#include "main.h"
/**
 * print_binary - converts decimal to binary
 * @n: decimal number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;
	static int c;

	if (n == 0 && c > 0)
		return;
	else if (n == 0)
	{
		_putchar('0');
		return;
	}
	i = (n & 1);
	c++;
	print_binary(n >>= 1);
	_putchar('0' + i);
}
