#include "main.h"

/**
 * main - add arguments check if int
 *
 * @argv: array of arguments
 * @argc: arguments count
 *
 * description - check argumnts then add them if intigers
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, check;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			check = is_int(argv[i]);
			if (!check)
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

/**
 * is_int - check input if int
 * @s: string
 * description -check inpurt if int
 * Return: checked input
 */
int is_int(char *s)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		if (isdigit(*(s + i)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

