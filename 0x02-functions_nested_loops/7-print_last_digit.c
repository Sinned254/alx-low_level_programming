#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @n: is number to determine it's last digit
 * Return: @ld last digit
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (n < 0)
		ld =  ld * -1;
	_putchar(ld + '0');
	return (ld);
}
