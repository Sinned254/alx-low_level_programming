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
	int j = 0;

	while (j <= 9)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
