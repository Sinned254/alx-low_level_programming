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
	int k = 0;

	while (k <= 9)
	{
		putchar(k);
		if (k < 9)
		{
			putchar(',');
			putchar(' ');
		}
		k++;
	}
	putchar('\n');
	return (0);
}
