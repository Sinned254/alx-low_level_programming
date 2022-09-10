#include <stdio.h>
/**
 * main- entry to the prongram
 *
 * Description: prints all possible combination of two digits
 *
 * Return 0 success
 */
int main(void)
{
	int i, j;

	i = 0;
	j = 0;
	while (i <= 9)
	{
		j = i + 1;
			while (j <= 9)
			{
				putchar('0' + i);
				putchar('0' + j);
				if (i < 8 || j < 9)
				{
					putchar(',');
					putchar(' ');
				}
				j++;
			}
			i++;
	}
	putchar('\n');
	return (0);
}

