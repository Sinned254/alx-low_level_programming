#include "main.h"

/**
 * main - prints multiplications of two numbers
 *
 * @argv: arguments array
 * @argc: argument counts
 *
 * Return: 0 success 1 error
 */
int main(int argc, char *argv[])
{
	int res = 0;


	if (argc == 3)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
