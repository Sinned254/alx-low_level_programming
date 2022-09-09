#include <stdio.h>
/**
 * main- entry to the program
 *
 * Description: print alphabets except q and e
 *
 * Return: zero is success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
			ch++;
	}
	putchar('\n');
}

