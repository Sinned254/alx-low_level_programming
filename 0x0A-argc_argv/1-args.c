#include "main.h"

/**
 * main - prints number of arguments passed into it.
 *
 * @argc: argument count
 * @argv: array of the arguments
 *
 * Return: 0 always
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
