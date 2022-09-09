#include <stdio.h>
/**
 * main - print single digit numbers
 *
 * Description: print digits with putchar
 *
 * Return: zero success always
 */
int main(void)
{
	int j;

	while (j <= 9)
	{
		putchar('0' + j);
		j++;
	}
	putchar('\n');
	return (0);
}
