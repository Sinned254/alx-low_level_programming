#include "main.h"
/**
 * main - prints minimum amont of change to make
 * @argv: arguments arrays
 * @argc: arguments count
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		amount = atoi(argv[1]);
		if (amount < 0)
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n", change(amount));
		}
	}
	return (0);
}

/**
 * change - finds change amount depending amount given
 *
 * @money: given cash
 *
 * Return: change
 */
int change(int money)
{
	int c = 0;
	int q = 0;
	int d = 0;
	int n = 0;
	int tc = 0;
	int p = 0;

	while (money > 0)
	{
		if (money >= 25)
		{
			money = money - 25;
			q = q + 1;
		}
		else if (money >= 10)
		{
			money = money - 10;
			d = d + 1;
		}
		else if  (money >= 5)
		{
			money = money - 5;
			n = n + 1;
		}
		else if (money >= 2)
		{
			money = money - 2;
			tc = tc + 1;
		}
		else
		{
			money = money - 1;
			p = p + 1;
		}
	}
	c = q + d + n + tc + p;
	return (c);
}


