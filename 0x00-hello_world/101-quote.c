#include <stdio.h>
#include <unistd.h>
/**
 * main- entry to the program
 *
 * Description: print a quote of text
 *
 * Return: return 1 success
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, ", 48, 1, stderr);
	fwrite("2015-10-19\n", 11, 1, stderr);
	return (1);
}

