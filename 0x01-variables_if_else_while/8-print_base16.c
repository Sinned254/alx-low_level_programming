#include <stdio.h>
/**
 * main - prints base 16
 *
 * Description: only putcharis used
 *
 * Return: zero success
 */
int main(void)
{
	int hex;

	while (hex < 16)
	{
		if (hex <= 9)
		{
			putchar('0' + hex);
		}
		else if (hex > 9)
		{
			putchar('a' + hex % 10);
		}
		hex++;
	}
	putchar('\n');
	return (0);
}
