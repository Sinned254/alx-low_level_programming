#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * main - prints _putchar to the screen
 *
 *Return: 0 success
 */
int main(void)
{
	char name[8] = "_putchar";
	int i = 0;

	for (i = 0, i < 9, i++)
		_putchar(name[i]);
	_putchar("\n");

	return (0);
}

