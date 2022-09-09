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
	int hex = 0;

	while (hex < 16)
	{
		if (hex <= 9)
		{
			putchar(hex);
		}
		else if (hex > 9)
		{
			putchar(hex + 'a');
		}
		hex++;
	}
	putchar('\n');
	return (0);
}
