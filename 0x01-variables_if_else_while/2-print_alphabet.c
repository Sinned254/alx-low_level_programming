#include <stdio.h>
/**
 * main- entry to the program
 *
 * Description: print alphabets in lower case
 *
 * Return: Always zero success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	putchar(ch);
	ch++;
	}
	putchar('\n');

	return (0);
}
