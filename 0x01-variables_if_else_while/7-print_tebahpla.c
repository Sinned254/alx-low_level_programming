#include <stdio.h>
/**
 * *main - print alphabets reverse
 *
 * Description: only putchar allowed
 *
 * Return: o success
 */
int main(void)
{
	char alp = 'z';

	while (alp >= 'a')
	{
		putchar(alp);
		alp--;
	}
	putchar('\n');
	return (0);
}
