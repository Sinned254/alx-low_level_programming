#include "main.h"

/**
 * main - prints all arguments it receives
 *
 * @argv: arguments array
 * @argc: arguments counts
 *
 * Return: o always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
