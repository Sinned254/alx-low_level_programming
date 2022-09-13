#include "main.h"

/**
 * main - print lowercase alphabet
 *
 * Return: void
 *
 */

void print_alphabet(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
