#include <stdio.h>
/**
 * main- entry to the program
 *
 * Description: print alphabets, lower and upper case
 *
 * Return: zero on success
 */
int main(void)
{
	char lc, uc;

	lc = 'a';
	uc = 'A';
	while (lc <= 'z')
	{
		putchar(lc);
		lc++;
	}
	while (uc <= 'Z')
	{
		putchar(uc);
		uc++;
	}
		putchar('\n');
		return (0);
}
