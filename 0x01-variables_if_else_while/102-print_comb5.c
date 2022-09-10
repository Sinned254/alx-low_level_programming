#include <stdio.h>
/**
 * main- print numbers, entry to the prongram
 *
 * Description: prints all possible combination of double digits
 *
 * Return: 0 success
 */
int main(void)
{
	int i, j, k, z;

	i = 0;
	while (i <= 9)
	{
		j = 0;
			while (j <= 9)
			{
				z = j + 1;
				k = i;
					while (k <= 9)
					{
					while (z <= 9)
					{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + z);
					if (i < 9 || j < 8 || k < 9 || z < 9)
					{
						putchar(',');
						putchar(' ');
					}
					z++;
					}
					z = 0;
					k++;
					}
					j++;
			}
			i++;
	}
	putchar('\n');
	return (0);
}

