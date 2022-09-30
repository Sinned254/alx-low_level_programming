#include "main.h"

/**
 * main - add arguments check if int
 *
 * @argv: array of arguments
 * @argc: arguments count
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, check;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			check = isdigit(**(argv + 1));
			if (check)
			{
				sum = sum + atoi(argv[i]);
			}
			if(!check)
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

