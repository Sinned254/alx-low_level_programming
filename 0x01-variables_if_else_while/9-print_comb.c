#include<stdio.h>
/**
 * main - prints sinle digits num combo
 *
 * Description: combo in ascending order
 *
 * Return: zero success
 *
 */
int main(void)
{
	int k;

	while (k <= 9)
	{
		putchar('0' + k);
		if (k < 10)
		{
			putchar(',');
			putchar(' ');
		}
		k++;
	}
	putchar('\n');
	return (0);
}
